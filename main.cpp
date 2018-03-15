// Programmer: Phuoc Quang
// Professor: Abbas Dehkhoda
// Project6:
// •Item: This class has the attributes (member variables) called title, description, and price.
// o Book: This class inherits from Item. It has an instance variable called pageCount. o Movie: This class inherits from Item.
// It has an instance variable called length.
// o CD: This class inherits from Item. It has an instance variable called trackCount.
// • ShoppingCart: This class keeps track of items that were bought. You may limit the number of items in the cart.
// The cart should have functions to add an item and print the items currently in the cart to the console.
// • Customer: The customer class stores an id, the first name and the last name and a pointer to a shopping cart object.
#include <iostream>
#include "Book.h"
#include "Movie.h"
#include "Cd.h"
#include "Customer.h"
#include <iomanip>
int main() {

    cout << fixed;
    cout << setprecision(2);

    //Create a First item
    Book *book = new Book();// =new Book();
    book->setPageCount(200);
    book->setTitle("Princess");
    book->setDescription("new Version 2.1");
    book->setPrice(20);

    //Create a second item
    Movie *movie = new Movie();
    movie->setLength(120);
    movie->setTitle("Titanic");
    movie->setDescription("1999 year");
    movie->setPrice(22.5);

    //Create a third item
    Movie *movie2= new Movie();
    movie2->setLength(120);
    movie2->setTitle("Jame Bond");
    movie2->setDescription("1995 year");
    movie2->setPrice(22.5);

    //Create a forth item
    Cd *cd = new Cd();
    cd->setTrackCount(12);
    cd->setTitle("Britney Spear");
    cd->setDescription("2001 year");
    cd->setPrice(30);

    //Create a fifth item
    Cd *cd2 = new Cd();
    cd2->setTrackCount(11);
    cd2->setTitle("Ed Sheeran");
    cd2->setDescription("2017 year");
    cd2->setPrice(30);

    //Create a sixth item
    Cd *cd3 = new Cd();
    cd3->setTrackCount(14);
    cd3->setTitle("Richard Clayderman");
    cd3->setDescription("2000 year");
    cd3->setPrice(21.5);

    //Create customer info
    Customer *customer = new Customer();
    cout << "Customer info: ";
    customer->setId(1234);
    customer->setFirstName("PHUOC");
    customer->setLastName("QUANG");
    customer->addItemToCart(book);
    customer->addItemToCart(movie);
    customer->addItemToCart(cd);
    customer->addItemToCart(cd2);
    customer->addItemToCart(movie2);

    //Display customer info and shopping cart items with maximun 5 items only.
    cout << customer->getId() << " ";
    cout << customer->getFirstName()<< " ";
    cout << customer->getLastName()<< endl;
    customer->showSoppingCart();

    return 0;
}