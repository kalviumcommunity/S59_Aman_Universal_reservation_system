#include "Place.h"
#include <iostream>

using namespace std;

Place::Place(const string &name, int totalSeats) : name(name), totalSeats(totalSeats) {}

void Place::displayInfo() const
{
    cout << "Place: " << this->name << ", Total Seats: " << this->totalSeats << endl;
}

bool Place::checkAvailability() const
{
    return this->totalSeats > 0;
}

void Place::setName(const string &name)
{
    this->name = name;
}

void Place::setTotalSeats(int totalSeats)
{
    this->totalSeats = totalSeats;
}
