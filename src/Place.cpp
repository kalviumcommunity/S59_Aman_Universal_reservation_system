#include "Place.h"
#include <iostream>

using namespace std;

Place::Place(const string &name, int totalSeats) : name(name), totalSeats(totalSeats) {}

void Place::displayInfo() const {
    cout << "Place: " << name << ", Total Seats: " << totalSeats << endl;
}

bool Place::checkAvailability() const {
    return totalSeats > 0;
}
