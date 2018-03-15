//
// Created by phuoc quang on 3/12/18.
//

#ifndef PROJECT6SHOPPING_CD_H
#define PROJECT6SHOPPING_CD_H

#include "Item.h"
class Cd: public Item {
public:
    Cd();
    virtual ~Cd();

    int getTrackCount();
    void setTrackCount(int trackCount);
    virtual void displayItemInfo();
private:
    int trackCount;
};

#endif //PROJECT6SHOPPING_CD_H
