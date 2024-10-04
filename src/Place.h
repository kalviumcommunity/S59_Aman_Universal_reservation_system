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
    Place(const string &name, int totalSeats);
    virtual void displayInfo() const;  // Make this virtual for overriding
    bool checkAvailability() const;
    string getName() const;
    void setName(const string &name);
    void setTotalSeats(int totalSeats);
};

#endif
