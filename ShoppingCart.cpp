//
// Created by phuoc quang on 3/12/18.
//

#include "ShoppingCart.h"

ShoppingCart::ShoppingCart() {
    top = nullptr;
    tail = top;
}
ShoppingCart::~ShoppingCart() {
    ShoppingNode *node;
    for(node = top; node!= nullptr; node= node->next){
        ShoppingNode *deleteNode;
        deleteNode = node;
        delete[] deleteNode;
    }
}

void ShoppingCart::addItem(Item *item) {
    if(keepTract <= MAX_SHOPPING_ITEM){
        ShoppingNode *myNode = new ShoppingNode;
        myNode->item = item;
        myNode->next = nullptr;
        if(top != nullptr){
            tail->next = myNode;
            tail = myNode;

        }else{
            top = myNode;
            tail = myNode;
            keepTract = 1;
        }
    }else{
        cout << endl;
    }
    keepTract++;
}

void ShoppingCart::printItem(){
    ShoppingNode *temp;

    int n = 0;
    for(temp = top;temp!= nullptr;temp=temp->next){
        cout << "* Item " << ++n << ") " ;
        temp->item->displayItemInfo();
    }
}