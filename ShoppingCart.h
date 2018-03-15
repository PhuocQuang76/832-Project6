//
// Created by phuoc quang on 3/12/18.
//

#ifndef PROJECT6SHOPPING_SHOPPINGCART_H
#define PROJECT6SHOPPING_SHOPPINGCART_H

#include <iostream>
#include "Item.h"

using namespace std;
class ShoppingCart {

private:
    const static int MAX_SHOPPING_ITEM = 5;
    struct ShoppingNode{
        Item *item;
        ShoppingNode *next;
    };
    ShoppingNode *top;
    ShoppingNode *tail;
    int keepTract;
public:
    ShoppingCart(); //Constructor
    virtual ~ShoppingCart(); //descontructor

    void addItem(Item *item);
    //double totalPrice();
    void printItem();

};


#endif //PROJECT6SHOPPING_SHOPPINGCART_H
