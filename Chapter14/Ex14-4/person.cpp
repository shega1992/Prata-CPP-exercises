#include "person.h"

// Person methods
Person::Person() : fname("No first name"), lname("No last name") {}

Person::Person(const std::string & fn, const std::string & ln)
	  : fname(fn), lname(ln) {}

void Person::Set()
{
	std::cout << "Enter person's first name: ";
	getline(std::cin, fname);
	std::cout << "Enter person's last name: ";
	getline(std::cin, lname);
}

void Person::Show() const
{
	std::cout << "first name: " << fname << ", "
		<< "last name: " << lname << std::endl;
}

// Gunslinger methods
Gunslinger::Gunslinger() : draw_time(0.0), notches(0) {}

Gunslinger::Gunslinger(const std::string & fn, const std::string & ln, double dt, int n)
	: Person(fn,ln), draw_time(dt), notches(n) {}

void Gunslinger::Set()
{
	Person::Set();
	Get();
}

void Gunslinger::Show() const
{
	std::cout << "Category: gunslinger\n";
	Person::Show();
	Data();
}

void Gunslinger::Data() const
{
	std::cout << "gunslinger's draw time: " << draw_time << ", "
		<< "number of notches on a gunslinger's gun: " << notches << std::endl;
}

void Gunslinger::Get()
{
	std::cout << "Enter gunslinger's draw time: ";
	std::cin >> draw_time;
	std::cout << "Enter number of notches on a gunslinger's gun: ";
	std::cin >> notches;
}

// PokerPlayer methods
PokerPlayer::PokerPlayer() {}

PokerPlayer::PokerPlayer(const std::string & fn, const std::string & ln)
	: Person(fn,ln) {}

void PokerPlayer::Set()
{
	Person::Set();
	Get();
}

void PokerPlayer::Show() const
{
	std::cout << "Category: poker player\n";
	Person::Show();
	Data();
}

void PokerPlayer::Data() const
{
	std::cout << "Card value: " << card_value << std::endl;
}

void PokerPlayer::Get()
{
	card_value = rand() % 52 + 1;
}

// BadDude methods
BadDude::BadDude() {}

BadDude::BadDude(const std::string & fn, const std::string & ln, double dt, int n)
	: Person(fn,ln), Gunslinger(fn,ln,dt,n), PokerPlayer(fn,ln) {}

void BadDude::Set()
{
	Person::Set();
	Get();
}

void BadDude::Show() const
{
	std::cout << "Category: bad dude\n";
	Person::Show();
	Data();
}

void BadDude::Data() const
{
	Gunslinger::Data();
	PokerPlayer::Data();
}

void BadDude::Get()
{
	Gunslinger::Get();
	PokerPlayer::Get();
}