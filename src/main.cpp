#include "Place.h"
#include "Reservation.h"

using namespace std;

int main()
{
    Place cinema("Cineplex", 150);
    cinema.displayInfo();

    // Demonstrating the usage of 'this' pointer with setter methods
    cinema.setName("Grand Cinema");
    cinema.setTotalSeats(200);
    cinema.displayInfo();

    Reservation booking(42);
    booking.confirmReservation();

    // Demonstrating the usage of 'this' pointer with setter method
    booking.setSeatNumber(45);
    booking.confirmReservation();

    return 0;
}
