#include "Place.h"

// Initialize static member
int Place::placeCount = 0;

// Default constructor
Place::Place() : name("Unnamed"), totalSeats(0)
{
    cout << "Default Constructor Called for Place: " << name << endl;
    placeCount++;
}

// Parameterized constructor
Place::Place(const string &name, int totalSeats) : name(name), totalSeats(totalSeats)
{
    cout << "Parameterized Constructor Called for Place: " << name << endl;
    placeCount++;
}

// Copy constructor
Place::Place(const Place &other) : name(other.name), totalSeats(other.totalSeats)
{
    cout << "Copy Constructor Called for Place: " << name << endl;
    placeCount++;
}

// Destructor
Place::~Place()
{
    cout << "Destructor Called for Place: " << name << endl;
    placeCount--;
}

// Getters and Setters (Encapsulation)
string Place::getName() const
{
    return name;
}

void Place::setName(const string &name)
{
    this->name = name;
}

int Place::getTotalSeats() const
{
    return totalSeats;
}

void Place::setTotalSeats(int totalSeats)
{
    this->totalSeats = totalSeats;
}

// Display info about the Place
void Place::displayInfo() const
{
    cout << "Place: " << name << ", Total Seats: " << totalSeats << endl;
}

// Static function to get total places
int Place::getTotalPlaces()
{
    return placeCount;
}
