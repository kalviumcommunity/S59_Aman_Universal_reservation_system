#ifndef VIPRESERVATION_H
#define VIPRESERVATION_H

#include "PremiumReservation.h"

class VIPReservation : public PremiumReservation
{
private:
    bool complimentaryDrinks;

public:
    VIPReservation(int seatNumber, double price, bool complimentaryDrinks);
    void confirmReservation() const override;
};

#endif
