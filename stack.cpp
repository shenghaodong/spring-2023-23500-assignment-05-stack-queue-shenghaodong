#include "stack.h"
#include <iostream>
#include "node.h"

//Change all these to work with nodes
void stack::push(int item){
    if (topIndex >= 5){
        throw STACK_ERR_FULL;
    }

    head.setNext() -> item;
    //a[topIndex] = item;
    topIndex++;
}

int stack::pop(){
    if (topIndex <= 0){
        throw STACK_ERR_EMPTY;
    }

    int tmp = a[topIndex-1];
    topIndex--;
    return tmp;
}

int stack::top(){
    if (topIndex <= 0){
    throw STACK_ERR_EMPTY;
    }

    return head.getNext();
    //return a[topIndex-1];
}

bool stack::is_empty(){

    return topIndex==0;
}