#ifndef PREMIUMRESERVATION_H
#define PREMIUMRESERVATION_H

#include "Reservation.h"

class PremiumReservation : public Reservation
{
protected:
    double price;

public:
    PremiumReservation(int seatNumber, double price = 50.0);
    void confirmReservation() const override;
};

#endif
