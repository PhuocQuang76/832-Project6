//
// Created by phuoc quang on 3/12/18.
//

#include "Cd.h"
#include <iomanip> // setprecision
#include <sstream> // stringstream

Cd::Cd() {

}

Cd::~Cd() {

}

int Cd::getTrackCount(){
    return trackCount;
}

void Cd::setTrackCount(int trackCount) {
    Cd::trackCount = trackCount;
}

void Cd::displayItemInfo(){
    stringstream stream;
    stream << fixed << setprecision(2) << Cd::getPrice();
    string s = stream.str();
    string str = "CD: ";
    str.append(getTitle());
    str.append(", ");
    str.append(getDescription());
    str.append(", $");
    str.append(s);
    str.append(", ");
    str.append(to_string(trackCount));
    str.append(" tracks");

    cout << str << endl;
}