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

    // Constructors
    Place();
    Place(const string &name, int totalSeats);
    Place(const Place &other);

    // Destructor
    ~Place();

    // Getters and Setters (Encapsulation)
    string getName() const;
    void setName(const string &name);

    int getTotalSeats() const;
    void setTotalSeats(int totalSeats);

    // Other member functions
    void displayInfo() const;

    // Static function to get total places
    static int getTotalPlaces();
};

#endif
