//
// Created by phuoc quang on 3/12/18.
//

#include "Customer.h"

Customer::Customer() {
    //create a pointer shoppingCart pointer which point to ShopiingCart's Object
    Customer::shoppingCart = new ShoppingCart();
}

Customer::~Customer() {
    delete [] shoppingCart;
}
int Customer::getId(){
    return id;
}

void Customer::setId(int id) {
    Customer::id = id;
}

string Customer::getFirstName(){
    return firstName;
}

void Customer::setFirstName(string firstName) {
    Customer::firstName = firstName;
}

string Customer::getLastName(){
    return lastName;
}

void Customer::setLastName(string lastName){
    Customer::lastName = lastName;
}
//Print out item int the shopping cart from a customer
string Customer::showSoppingCart(){
    shoppingCart->printItem();
}
//Add items to the shopping cart from a customer
void Customer::addItemToCart(Item *item){
    shoppingCart->addItem(item);
}
