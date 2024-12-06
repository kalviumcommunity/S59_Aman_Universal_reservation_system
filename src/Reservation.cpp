#include "Reservation.h"

// Implementation details are in header for this simple class

// PremiumReservation.h
#pragma once
#include "Reservation.h"

class PremiumReservation : public Reservation {
private:
    bool includeCatering;
    bool includeSetup;
    double additionalServices;

public:
    PremiumReservation(const std::string& d, int dur, const std::string& name,
                       const std::string& contact, bool catering, bool setup)
        : Reservation(d, dur, name, contact),
          includeCatering(catering), includeSetup(setup) {
        calculateAdditionalServices();
    }

    void calculateAdditionalServices() {
        additionalServices = 0;
        if (includeCatering) additionalServices += 100;
        if (includeSetup) additionalServices += 50;
    }

    double getAdditionalCharges() const { return additionalServices; }

    std::string getDetails() const override {
        return Reservation::getDetails() + "\nCatering: " + (includeCatering ? "Yes" : "No") +
               "\nSetup Service: " + (includeSetup ? "Yes" : "No") +
               "\nAdditional Charges: $" + std::to_string(additionalServices);
    }
};
