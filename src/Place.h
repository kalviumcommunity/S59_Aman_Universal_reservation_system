#ifndef PLACE_H
#define PLACE_H

#include <string>
#include <iostream>
using namespace std;

class Place
{
private:
    string name;
    int totalSeats;

public:
    static int placeCount;

    // Default constructor
    Place() : name("Unnamed"), totalSeats(0)
    {
        cout << "Default Constructor Called for Place: " << name << endl;
        placeCount++;
    }

    // Parameterized constructor
    Place(const string &name, int totalSeats) : name(name), totalSeats(totalSeats)
    {
        cout << "Parameterized Constructor Called for Place: " << name << endl;
        placeCount++;
    }

    // Copy constructor
    Place(const Place &other) : name(other.name), totalSeats(other.totalSeats)
    {
        cout << "Copy Constructor Called for Place: " << name << endl;
        placeCount++;
    }

    // Destructor
    ~Place()
    {
        cout << "Destructor Called for Place: " << name << endl;
        placeCount--;
    }

    // Accessors and Mutators (Encapsulation)
    string getName() const { return name; }
    void setName(const string &name) { this->name = name; }

    int getTotalSeats() const { return totalSeats; }
    void setTotalSeats(int totalSeats) { this->totalSeats = totalSeats; }

    void displayInfo() const
    {
        cout << "Place: " << name << ", Total Seats: " << totalSeats << endl;
    }

    static int getTotalPlaces()
    {
        return placeCount;
    }
};

int Place::placeCount = 0;

#endif
