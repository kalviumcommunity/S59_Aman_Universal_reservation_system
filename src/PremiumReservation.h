#ifndef PREMIUMRESERVATION_H
#define PREMIUMRESERVATION_H

#include "Reservation.h"

class PremiumReservation : public Reservation
{
private:
    double price;

public:
    PremiumReservation(int seatNumber, double price);
    void confirmReservation() const;
};

#endif
