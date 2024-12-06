#include "Place.h"

// Implementation details are in header for this simple class

// SpecialPlace.h
#pragma once
#include "Place.h"

class SpecialPlace : public Place {
private:
    double amenityCharge;
    std::string specialFeatures;

public:
    SpecialPlace(const std::string& n, const std::string& desc, double price,
                 double aCharge, const std::string& features)
        : Place(n, desc, price), amenityCharge(aCharge), specialFeatures(features) {}

    double getPrice() const override {
        return basePrice + amenityCharge;
    }

    std::string getDetails() const override {
        return Place::getDetails() + "\nSpecial Features: " + specialFeatures +
               "\nAmenity Charge: $" + std::to_string(amenityCharge);
    }
};
