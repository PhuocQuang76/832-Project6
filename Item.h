//
// Created by phuoc quang on 3/12/18.
//


#ifndef PROJECT6SHOPPING_SHOPPING_H
#define PROJECT6SHOPPING_SHOPPING_H

#include <iostream>
#include <string>

using namespace std;
class Item {
private:
    string title;
    string description;
    double price;
public:
    Item();
    virtual ~Item();

    void setTitle(string title);
    string getTitle();

    void setDescription(string description);
    string getDescription();

    void setPrice(double price);

    double getPrice();

    virtual void displayItemInfo();
};

#endif //PROJECT6SHOPPING_SHOPPING_H
