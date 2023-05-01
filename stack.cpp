#include "stack.h"
#include <iostream>
#include "node.h"

//Change all these to work with nodes
void stack::push(std::string item){//Need to determine max size
    if (topIndex >= 5){//Change this number don't hard code it in
        throw STACK_ERR_FULL;
    }
    // Node *trailer = nullptr;
    // Node *nextNode = new Node(item);
    // while(head  != nullptr){
        
    // }

    // head -> setNext(nextNode);
    // //a[topIndex] = item;
    // topIndex++;
    Node *tmp = new Node(item);
    tmp->setNext(head);
    head = tmp;
}

int stack::pop(){//Finish this not done
    if (topIndex <= 0){
        throw STACK_ERR_EMPTY;
    }

    //int tmp = a[topIndex-1];
    //topIndex--;
    int tmp = 0;
    return tmp;
}

int stack::top(){//Done I think
    if (topIndex <= 0){
    throw STACK_ERR_EMPTY;
    }
    int returnVal = std::stoi(head -> getData());
    return returnVal;
    //return a[topIndex-1];
}

bool stack::is_empty(){//Not sure if it works
    if(head == nullptr){
        return 0;
    }
    return 1;

    //return topIndex==0;
}