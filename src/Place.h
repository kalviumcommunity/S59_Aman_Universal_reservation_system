#ifndef PLACE_H
#define PLACE_H

#include <string>
using namespace std;

class Place
{
private:
    // Private data members (implementation details hidden)
    string name;
    int totalSeats;

public:
    // Static member, public to provide access through public interface
    static int placeCount;

    // Constructor
    Place(const string &name, int totalSeats);

    // Public accessors and mutators (interface)
    string getName() const;
    void setName(const string &name);

    int getTotalSeats() const;
    void setTotalSeats(int totalSeats);

    // Public methods for interface
    void displayInfo() const;
    bool checkAvailability() const;

    // Static member function
    static int getTotalPlaces();
};

#endif
