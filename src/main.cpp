#include <iostream>
#include "Place.h"
#include "SpecialPlace.h"
#include "Reservation.h"
#include "PremiumReservation.h"

using namespace std;

int main()
{
    // Dynamic allocation of Place objects array
    const int numPlaces = 3;
    Place *places = new Place[numPlaces]{
        Place("Cineplex", 150),
        Place("Grand Cinema", 200),
        Place("Downtown Theater", 100)};
    
    // Adding a SpecialPlace to demonstrate polymorphism
    Place *special = new SpecialPlace("Luxury Cinema", 50, true);
    
    // Displaying information for all Place objects
    cout << "Places Information:" << endl;
    for (int i = 0; i < numPlaces; ++i)
    {
        places[i].displayInfo();
    }
    special->displayInfo(); // Polymorphic call
    
    // Dynamic allocation of Reservation objects array
    const int numReservations = 3;
    Reservation *reservations = new Reservation[numReservations]{
        Reservation(42),
        Reservation(35),
        Reservation(18)};
    
    // Adding a PremiumReservation to demonstrate polymorphism
    Reservation *premium = new PremiumReservation(1, 100.0);
    
    // Confirming reservations for all Reservation objects
    cout << "\nReservations Confirmation:" << endl;
    for (int i = 0; i < numReservations; ++i)
    {
        reservations[i].confirmReservation();
    }
    premium->confirmReservation(); // Polymorphic call
    
    // Freeing allocated memory
    delete[] places;
    delete special;
    delete[] reservations;
    delete premium;
    
    return 0;
}
