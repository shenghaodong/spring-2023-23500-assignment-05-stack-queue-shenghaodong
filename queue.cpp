queue::queue(){
    head = -1; // if both are -1 means it's empty
    tail = -1;
}

void queue::enqueue(int item){
    if(is_full == true){
        return;
    }else if(is_empty == true){
        head = 0;
        tail = 0;
    }else{
        tail = (tail + 1) % maxSize; //Loops back to 0th index once it hits max size
    }
    arr[tail] = item;
}

int queue::dequeue(){
    if(is_empty == true){
        //Throw error it's empty
    }else if(head == tail){
        //Arr is empty
        head = -1;
        tail = -1;
    }else{
        //Move head forward
        head = (head + 1) % maxSize; //same thing to loop back to 0th index
    }
}

int queue::front(){
    //Check for front of head
    if(is_empty == true){
        return;
    }else{
        return arr[head];
    }
}

bool queue::is_empty(){
    if(head == -1 && tail == -1){
        return true;
    }
    return false;
}

bool queue::is_full(){
    //When the queue is full head is always one ahead of tail or index 0. So you can use mod to find out if it's full.
    if(tail + 1 % maxSize == head){
        return true;
    }
    return false;
}