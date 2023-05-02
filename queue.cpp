#include "queue.h"

queue::queue(){
    head = -1; // if both are -1 means it's empty
    tail = -1;
}

void queue::enqueue(int item){
    if(is_full() == true){
        throw QUEUE_ERR_FULL;
    }else if(is_empty() == true){
        head = 0;
        tail = 0;
    }else{
        tail = (tail + 1) % maxSize; //Loops back to 0th index once it hits max size
    }
    arr[tail] = item;
}

int queue::dequeue(){
    if(is_empty() == true){
        throw QUEUE_ERR_EMPTY;
    }else if(head == tail){
        //Arr is empty
        int temp = arr[head];
        head = -1;
        tail = -1;
        return temp;
    }else{
        //Move head forward
        int temp = arr[head];
        head = (head + 1) % maxSize; //same thing to loop back to 0th index
        return temp;
    }
}

int queue::front(){
    //Check for front of head
    if(is_empty() == true){
        throw QUEUE_ERR_EMPTY;
    }
    return arr[head];
}

bool queue::is_empty(){
    if(head == -1 && tail == -1){
        return true;
    }
    return false;
}

bool queue::is_full(){
    //When the queue is full head is always one ahead of tail or index 0. So you can use mod to find out if it's full.
    if((tail + 1) % maxSize == head){
        return true;
    }
    return false;
}