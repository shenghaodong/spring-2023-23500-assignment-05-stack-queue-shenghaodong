#include "stack.h"
#include <iostream>
#include "node.h"

//Change all these to work with nodes
void stack::push(std::string item){
    if (topIndex >= 5){//Change this number don't hard code it in
        throw STACK_ERR_FULL;
    }

    Node *nextNode = new Node(item);
    head -> setNext(nextNode);
    //a[topIndex] = item;
    topIndex++;
}

int stack::pop(){
    if (topIndex <= 0){
        throw STACK_ERR_EMPTY;
    }

    //int tmp = a[topIndex-1];
    //topIndex--;
    int tmp = 0;
    return tmp;
}

int stack::top(){
    if (topIndex <= 0){
    throw STACK_ERR_EMPTY;
    }
    int returnVal = std::stoi(head -> getData());
    return returnVal;
    //return a[topIndex-1];
}

bool stack::is_empty(){

    return topIndex==0;
}