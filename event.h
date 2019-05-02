#include <iostream>

using namespace std;

class Event
{
    int day, month, year;
    int hour, minutes;
    string name;

public:

    Event(string="brak", int=1, int=1, int=2018, int=12, int=0); // konstruktor + argumenty
    ~Event();   // destruktor = nie moze miec zadnych argumentow
    void load();
    void show();
};
