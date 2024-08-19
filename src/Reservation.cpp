#include "Reservation.h"
#include <iostream> 
using namespace std;

Reservation::Reservation(int seatNumber) : seatNumber(seatNumber) { NumOfSeatReserved++; }

int Reservation::NumOfSeatReserved = 0;

void Reservation::confirmReservation() const
{
    cout << "Reservation confirmed for seat number: " << seatNumber << endl;
}
