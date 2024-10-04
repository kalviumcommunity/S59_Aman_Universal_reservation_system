#include "SpecialPlace.h"
#include <iostream>
using namespace std;

SpecialPlace::SpecialPlace(const string &name, int totalSeats, bool hasVIPSeats)
    : Place(name, totalSeats), hasVIPSeats(hasVIPSeats) {}

void SpecialPlace::displayInfo() const
{
    Place::displayInfo(); // Call base class function
    cout << "VIP Seats Available: " << (hasVIPSeats ? "Yes" : "No") << endl;
}
