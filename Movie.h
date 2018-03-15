//
// Created by phuoc quang on 3/12/18.
//

#ifndef PROJECT6SHOPPING_MOVIE_H
#define PROJECT6SHOPPING_MOVIE_H

#include "Item.h"

class Movie: public Item {
public:
    Movie();
    virtual ~Movie();

    int getLength();
    void setLength(int length);
    virtual void displayItemInfo();
private:
    int length;
};


#endif //PROJECT6SHOPPING_MOVIE_H
