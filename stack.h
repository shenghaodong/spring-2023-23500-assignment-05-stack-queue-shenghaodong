#pragma once
class stack{
    private:
    Node *head;
    int topIndex;
  

    public:
    void push(int); // add an item to the top
    int pop(); // remove and return an item from the top of the stack
    int top(); // returns but doesn't remove the value on top
    bool is_empty(); // returns true if stack is empty
    
};