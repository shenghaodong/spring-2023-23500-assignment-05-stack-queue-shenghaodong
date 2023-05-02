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
    int arr[10];
    int head;
    int tail;
  
    
    public:
    void enqueue(int item);
    int dequeue();
    int front();
    bool is_empty();
    bool is_full();
};

/*
Create an array (or std::vector) based queue class. You can call the class whatever you like. 
It should start the array (or std::vector) at some small size and have integer index variables to represent the front and back (head / tail). 
When you get to the end of the array, you should cycle back to the beginning and when the head wraps around and catches up with the tail, the queue should be considered full. 
Likewise if the tail catches up with the head the qwueue is empty. Note that the tail also wraps around and taht the queue starts out empty.
*/