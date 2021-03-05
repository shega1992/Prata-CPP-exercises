#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class Person
{
private:
	std::string fname;
	std::string lname;
public:
	Person();
	Person(const std::string & fn, const std::string & ln);
	virtual ~Person() {}
	virtual void Set();
	virtual void Show() const;
};

class Gunslinger : virtual public Person
{
private:
	double draw_time;
	int notches; // number of notches on a gunslinger’s gun
protected:
	void Data() const;
	void Get();
public:
	Gunslinger();
	Gunslinger(const std::string & fn, const std::string & ln, double dt, int n);
	~Gunslinger() {}
	double Draw() const { return draw_time; }
	virtual void Set();
	virtual void Show() const;
};

class PokerPlayer : virtual public Person
{
private:
	int card_value;
protected:
	void Data() const;
	void Get();
public:
	PokerPlayer();
	PokerPlayer(const std::string & fn, const std::string & ln);
	~PokerPlayer() {}
	int Draw() const { return card_value; }
	virtual void Set();
	virtual void Show() const;
};

class BadDude : public Gunslinger, public PokerPlayer
{
protected:
	void Data() const;
	void Get();
public:
	BadDude();
	BadDude(const std::string & fn, const std::string & ln, double dt, int n);
	~BadDude() {}
	double Gdraw() const { return Gunslinger::Draw(); }
	int Cdraw() const { return PokerPlayer::Draw(); }
	virtual void Set();
	virtual void Show() const;
};

#endif 

