#pragma once
#include <iostream>
#include "node.h"


#define STACK_ERR_EMPTY 1
#define STACK_ERR_FULL 2
#define STACK_ERR_OTHER 4

class stack{
    private:
    Node *head;
    int topIndex = 0; //topIndex of 0 means that there is nothing in the stack
  
    
    public:
    void push(std::string); // add an item to the top
    int pop(); // remove and return an item from the top of the stack
    int top(); // returns but doesn't remove the value on top
    bool is_empty(); // returns true if stack is empty
    
};