#include <iostream>
#include "Place.h"
#include "Reservation.h"

using namespace std;

int main()
{
    // Dynamic allocation of Place objects array
    const int numPlaces = 3;
    Place *places = new Place[numPlaces]{
        Place("Cineplex", 150),
        Place("Grand Cinema", 200),
        Place("Downtown Theater", 100)};

    // Displaying initial information for all Place objects
    cout << "Initial Places Information:" << endl;
    for (int i = 0; i < numPlaces; ++i)
    {
        places[i].displayInfo();
    }

    // Using mutators to change the name and total seats of the first place
    places[0].setName("Updated Cineplex");
    places[0].setTotalSeats(120);

    // Displaying updated information for the first place
    cout << "\nUpdated Place Information (After using mutators):" << endl;
    places[0].displayInfo();

    // Using accessors to get and print the name and total seats of the first place
    cout << "\nUsing Accessors to Retrieve Place Info:" << endl;
    cout << "Place Name: " << places[0].getName() << ", Total Seats: " << places[0].getTotalSeats() << endl;

    // Display total number of places using the static member function
    cout << "\nTotal number of places registered (using static function): " << Place::getTotalPlaces() << endl;

    // Dynamic allocation of Reservation objects array
    const int numReservations = 3;
    Reservation *reservations = new Reservation[numReservations]{
        Reservation(42),
        Reservation(35),
        Reservation(18)};

    // Confirming reservations for all Reservation objects
    cout << "\nReservations Confirmation:" << endl;
    for (int i = 0; i < numReservations; ++i)
    {
        reservations[i].confirmReservation();
    }

    // Using mutators to change seat number for a reservation
    reservations[0].setSeatNumber(55);

    // Displaying the updated reservation
    cout << "\nUpdated Reservation Information (After using mutator):" << endl;
    reservations[0].confirmReservation();

    // Using accessors to retrieve seat number
    cout << "\nUsing Accessor to Retrieve Reservation Info:" << endl;
    cout << "Seat Number: " << reservations[0].getSeatNumber() << endl;

    // Printing static variables to console
    cout << "\nTotal number of places registered: " << Place::placeCount << endl;
    cout << "Total number of seats reserved: " << Reservation::NumOfSeatReserved << endl;

    // Freeing allocated memory
    delete[] places;
    delete[] reservations;

    return 0;
}
