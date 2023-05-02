/*
Your class must implement the following functionality:
1. Constructor(s)
2. enqueue(int) (you can change to std::string if you wish) // add an item to the back of the queue
3. int dequeue() // remove and return the item from the front of the queue
4. int front() // return but do not remove the item from the front of the queue
5. bool is_empty()
6. bool is_full().
*/
#pragma once
#include <iostream>

class queue{
    private:
    //array
    int topIndex = 0; //topIndex of 0 means that there is nothing in the stack
  
    
    public:
    void enqueue(int item);
    int dequeue();
    int front();
    bool is_empty();
    bool is_full();
    
};