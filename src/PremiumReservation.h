#ifndef PREMIUMRESERVATION_H
#define PREMIUMRESERVATION_H

#include "Reservation.h"

class PremiumReservation : public Reservation
{
protected:
    double price;

public:
    PremiumReservation(int seatNumber, double price = 50.0)
        : Reservation(seatNumber), price(price) {}

    void confirmReservation() const override
    {
        cout << "Premium reservation confirmed for seat number: " << seatNumber
             << " at a price of $" << price << endl;
    }
};

#endif