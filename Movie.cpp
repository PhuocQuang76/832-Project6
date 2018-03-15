//
// Created by phuoc quang on 3/12/18.
//

#include "Movie.h"
#include <iomanip>
#include <sstream>

Movie::Movie() {

}
Movie::~Movie() {

}
int Movie::getLength(){
    return length;
}

void Movie::setLength(int length) {
    Movie::length = length;
}

void Movie::displayItemInfo(){
    stringstream stream;
    stream << fixed << setprecision(2) << Movie::getPrice();
    string s = stream.str();
    string str = "Movie: ";
    str.append(getTitle());
    str.append(", ");
    str.append(getDescription());
    str.append(", $");
    str.append(s);
    str.append(", ");
    str.append(to_string(length));
    str.append(" minutes");

    cout << str << endl;
    //return str;
}