#include "Place.h"
#include "Reservation.h"

using namespace std;

int main() {
    Place cinema("Cineplex", 150);
    cinema.displayInfo();

    Reservation booking(42);
    booking.confirmReservation();

    return 0;
}
