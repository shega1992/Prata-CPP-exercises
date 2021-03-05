#include <cstring>
#include <cctype>
#include "string2.h"
using std::cin;
using std::cout;

// initializing static class member
int String::num_strings = 0;

// static method
int String::HowMany()
{
    return num_strings;
}

// class methods
String::String(const char * s) // construct String from C string
{
    len = std::strlen(s);     // set size
    str = new char[len + 1]; // allot storage
    std::strcpy(str, s);    // initialize pointer
    num_strings++;         // set object count
}

String::String()         // default constructor
{
    len = 4;
    str = new char[1];
    str[0] = '\0';     // default string
    num_strings++;
}

String::String(const String & st)
{
    num_strings++;               // handle static member update
    len = st.len;               // same length
    str = new char [len + 1];  // allot space
    std::strcpy(str, st.str); // copy string to new location
}

String::~String()           // necessary destructor
{
    --num_strings;         // required
    delete [] str;        // required
}

//converts all alphabetic characters in a string to lowercase
void String::stringlow()
{
    for(int i = 0; str[i] != '\0'; i++)
        str[i] = tolower(str[i]);
}

// converts all alphabetic characters in a string to uppercase
void String::stringup()
{
   for(int i = 0; str[i] != '\0'; i++)
        str[i] = toupper(str[i]);
}

// returns the number of times the character appears in the string
int String::has(char ch) const
{
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
        if(str[i] == ch)
            count++;
    return count;
}

// overloaded operator methods
    // assign a String to a String
String & String::operator=(const String & st)
{
    if (this == &st)
    return *this;
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

// assign a C string to a String
String & String::operator=(const char * s)
{
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

// read-write char access for non-const String
char & String::operator[](int i)
{
    return str[i];
}

// read-only char access for const String
const char & String::operator[](int i) const
{
    return str[i];
}

// join two strings into one
String String::operator+(const String & st2) const
{
    String result;
    result.len = len + st2.len;
    result.str = new char[result.len + 1];
    std::strcpy(result.str, str);
    std::strcat(result.str, st2.str);
    return result;
}

// overloaded operator friends
bool operator<(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}
bool operator>(const String &st1, const String &st2)
{
    return st2 < st1;
}

bool operator==(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}

    // simple String output
ostream & operator<<(ostream & os, const String & st)
{
    os << st.str;
    return os;
}

// quick and dirty String input
istream & operator>>(istream & is, String & st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}

String operator+(const char *st1, const String & st2)
{
    String temp(st1);
    return temp + st2;
}

