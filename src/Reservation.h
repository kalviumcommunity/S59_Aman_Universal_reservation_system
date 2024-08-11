#ifndef RESERVATION_H
#define RESERVATION_H

using namespace std;

class Reservation
{
private:
    int seatNumber;

public:
    Reservation(int seatNumber);
    void confirmReservation() const;
    void setSeatNumber(int seatNumber);
};

#endif
