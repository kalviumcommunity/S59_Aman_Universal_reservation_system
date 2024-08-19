#ifndef RESERVATION_H
#define RESERVATION_H

using namespace std;

class Reservation
{
private:
    int seatNumber;

public:
    static int NumOfSeatReserved;
    Reservation(int seatNumber);
    void confirmReservation() const;
    void setSeatNumber(int seatNumber);
};

#endif
