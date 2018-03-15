//
// Created by phuoc quang on 3/12/18.
//

#include "Book.h"
#include <string>
#include <iomanip>
#include <sstream>

Book::Book() {
}

Book::~Book() {
}

int Book::getPageCount(){
    return pageCount;
}

void Book::setPageCount(int pageCount) {
    Book::pageCount = pageCount;
}

void Book::displayItemInfo(){
    stringstream stream;
    stream << fixed << setprecision(2) << Book::getPrice();
    string s = stream.str();
    string str = "Book: ";
    str.append(getTitle());
    str.append(", ");
    str.append(getDescription());
    str.append(", $");
    str.append(s);
    str.append(", ");
    str.append(to_string(pageCount));
    str.append(" pages");

    cout << str << endl;
}
