#ifndef SPECIALPLACE_H
#define SPECIALPLACE_H

#include "Place.h"

class SpecialPlace : public Place
{
private:
    bool hasVIPSeats;

public:
    SpecialPlace(const string &name, int totalSeats, bool hasVIPSeats);
    void displayInfo() const;
};

#endif
