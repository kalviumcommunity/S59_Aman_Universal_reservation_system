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

    Place(const string &name, int totalSeats);
    void displayInfo() const;
    bool checkAvailability() const;
    void setName(const string &name);
    void setTotalSeats(int totalSeats);
};

#endif
