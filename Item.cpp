//
// Created by phuoc quang on 3/12/18.
//

#include "Item.h"

Item::Item(){

    title = "";
    description = "";
    price = 0.0;
}

Item::~Item() {

}

void Item::setTitle(string itemTitle) {
    title = itemTitle;
}

void Item::setDescription(string itemDescriptiom) {
    description = itemDescriptiom;
}

void Item::setPrice(double itemPrice) {
    price = itemPrice;
}

string Item::getTitle(){
    return title;
}

string Item::getDescription()  {
    return description;
}

double Item::getPrice(){
    return price;
}

void Item::displayItemInfo(){
    //return "";
}

