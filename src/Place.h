#ifndef PLACE_H
#define PLACE_H

#include <string>
using namespace std;

class Place
{
private:
    string name;
    int totalSeats;

public:
    static int placeCount;

    // Static member function
    static int getTotalPlaces()
    {
        return placeCount;
    }

    // Constructor
    Place(const string &name, int totalSeats);

    // Accessors (Getters)
    string getName() const { return name; }
    int getTotalSeats() const { return totalSeats; }

    // Mutators (Setters)
    void setName(const string &name) { this->name = name; }
    void setTotalSeats(int totalSeats) { this->totalSeats = totalSeats; }

    void displayInfo() const;
    bool checkAvailability() const;
};

#endif
