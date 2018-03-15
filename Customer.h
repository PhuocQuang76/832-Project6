//
// Created by phuoc quang on 3/12/18.
//

#ifndef PROJECT6SHOPPING_CUSTOMER_H
#define PROJECT6SHOPPING_CUSTOMER_H

#include <string>
#include "ShoppingCart.h"

using namespace std;

class Customer {
private:
    int id;
    string firstName;
    string lastName;
    ShoppingCart *shoppingCart;

public:
    Customer();
    virtual ~Customer();

    int getId();
    void setId(int id);

    string getFirstName();
    void setFirstName(string firstName);

    string getLastName();
    void setLastName(string lastName);

//    ShoppingCart *getShoppingCard();
//    void setShoppingCard(ShoppingCart *shoppingCard);

    string showSoppingCart();
    void addItemToCart(Item *item);
};


#endif //PROJECT6SHOPPING_CUSTOMER_H
