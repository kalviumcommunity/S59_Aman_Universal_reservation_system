#ifndef SPECIALPLACE_H
#define SPECIALPLACE_H

#include "Place.h"

class SpecialPlace : public Place
{
public:
    SpecialPlace(const string &name, int totalSeats) : Place(name, totalSeats) {}
    void displayInfo() const override;  // Override displayInfo
};

#endif
