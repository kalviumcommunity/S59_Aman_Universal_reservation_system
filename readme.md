
# Universal Seat Vacancies Checker

## Overview

The **Universal Seat Vacancies Checker** is a C++ project designed to help users find and manage seat availability in public places like theaters, restaurants, cafes, and similar venues. The system allows users to sort and filter places by city and state, check seat availability, make reservations, rate venues, and manage user profiles. This comprehensive tool provides a convenient way to find available seats and manage reservations effectively.

## Features

### Place Management

-   **Add Place:** Add new venues with details like name, type (e.g., theater, restaurant, cafe), city, state, and seating capacity.
-   **Update Place:** Update venue details and seating capacity.
-   **Remove Place:** Remove venues from the system.

### Seat and Reservation Management

-   **Check Seat Availability:** Display available seats for selected venues.
-   **Reserve Seat:** Allow users to reserve seats in advance.
-   **Cancel Reservation:** Enable users to cancel their reservations.

### Filtering and Sorting

-   **Filter by City and State:** Filter venues based on city and state.
-   **Sort Places:** Sort venues based on criteria such as rating or seating capacity.

### User Interaction

-   **User Profiles:** Create user profiles and manage reservations.
-   **Rating System:** Allow users to rate venues and view ratings from other users.
-   **Notifications:** Notify users about their reservation status and any changes in availability.

### Reporting and Analytics

-   **Usage Reports:** Generate reports on seat usage across various venues.
-   **Trend Analysis:** Analyze data to identify trends in seat availability and venue popularity.

## Programming Language

The project is implemented in **C++**, leveraging its robust support for object-oriented programming (OOP) and efficient performance for simulations.

## OOP Concepts Applied

### Classes and Objects

-   **Place Class:** Represents venues with attributes like name, type, city, state, seating capacity, and rating.
-   **Seat Class:** Manages individual seats, including attributes like seat number, status, and reservation details.
-   **User Class:** Represents users with attributes such as name, user ID, and reservation history.
-   **Reservation Class:** Handles reservation details, linking users with places and seats.

### Key OOP Principles

-   **Encapsulation:** Classes encapsulate data and methods, e.g., the Place class has private attributes with public methods for access.
-   **Inheritance:** Specialized classes (e.g., VIP seats) inherit from base classes, sharing common attributes while adding specific features.
-   **Polymorphism:** Methods are designed to handle different types of reservations or ratings. For example, rating a theater may differ from rating a restaurant.
-   **Abstraction:** Abstract classes or interfaces represent common functionalities, such as a `Reservable` interface implemented by the `Seat` class.


    

## Usage

1.  **Launch the application** and follow the on-screen prompts to:
    
    -   Add new venues.
    -   Check seat availability.
    -   Make or cancel reservations.
    -   Rate venues.
    -   Manage your user profile.
2.  **Use filters** to sort and find places based on city, state, or seating capacity.
    
3.  **View reports** and analytics to track seat usage and venue popularity.
    

## Contributing

Contributions are welcome! If you have suggestions or improvements, please follow these steps:

1.  **Fork the repository**.
2.  **Create a new branch** (`git checkout -b feature-branch`).
3.  **Commit your changes** (`git commit -m 'Add new feature'`).
4.  **Push to the branch** (`git push origin feature-branch`).
5.  **Open a pull request**.

## Links

-   **Video Demo:** [Watch here](https://drive.google.com/file/d/1_7j6TmVlaQpUauzNvkPKNMJj6WfgN5mz/view?usp=sharing)
-   **Presentation:** [View here](https://docs.google.com/presentation/d/16FvlPTnAUD0L5gP76ZbvOe212EUsHwQNUwjFdwD7HfU/edit?usp=sharing)