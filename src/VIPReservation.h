#pragma once
#include "Reservation.h"

class VIPReservation : public Reservation {
private:
    std::string vipPackage;
    double vipDiscount;

public:
    VIPReservation(const std::string& d, int dur, const std::string& name,
                   const std::string& contact, const std::string& package)
        : Reservation(d, dur, name, contact), vipPackage(package) {
        vipDiscount = calculateDiscount();
    }

    double calculateDiscount() const {
        if (vipPackage == "Gold") return 0.15;
        if (vipPackage == "Platinum") return 0.20;
        return 0.10; // Silver
    }

    double getDiscount() const { return vipDiscount; }

    std::string getDetails() const override {
        return Reservation::getDetails() + "\nVIP Package: " + vipPackage +
               "\nDiscount: " + std::to_string(vipDiscount * 100) + "%";
    }
};