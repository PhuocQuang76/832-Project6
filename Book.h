//
// Created by phuoc quang on 3/12/18.
//

#ifndef PROJECT6SHOPPING_BOOK_H
#define PROJECT6SHOPPING_BOOK_H

#include "Item.h"
#include <iostream>

using namespace std;

class Book: public Item {
public:
    Book(); //constructors
    virtual ~Book(); //desconstructor

    int getPageCount();
    void setPageCount(int pageCount);
    virtual void displayItemInfo();
private:
    int pageCount;
};


#endif //PROJECT6SHOPPING_BOOK_H
