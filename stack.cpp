#include "stack.h"
#include <iostream>
#include "node.h"

stack::stack(){
  head = nullptr;
}

stack::~stack(){
  std::cerr << "Calling the destructor\n";
  Node *walker = head;
  Node *trailer = nullptr;
  while (walker != nullptr){
    trailer=  walker;
    walker = walker->getNext();
    std::cerr << "Deleting " << trailer->getData() << ", ";
    delete trailer;
  }
  std::cerr << "\n";
}

//Works
void stack::push(std::string item){
    Node *trailer = nullptr;
    Node *temp = head;
    insert(topIndex, item);
    topIndex++;

}

//Works
std::string stack::pop(){
    if (topIndex <= 0){
        throw STACK_ERR_EMPTY;
    }
    std::string tmp = get(topIndex - 1);
    remove(topIndex - 1);
    topIndex--;
    return tmp;
}

//Works
std::string stack::top(){
    if (topIndex <= 0){
    throw STACK_ERR_EMPTY;
    }
    std::string returnVal = get(topIndex - 1);
    return returnVal;
}

//Works
bool stack::is_empty(){
    if(head == nullptr){
        return 0;
    }
    return 1;
}


//Helper Functions
void stack::remove(int loc){
  Node *walker, *trailer;
  walker = this->head; // start of the list
  trailer = nullptr; // one behind
  
  while(loc>0 && walker != nullptr){
    loc=loc-1;
    trailer=walker;
    walker = walker->getNext();
  }

  if (walker == nullptr){
    throw std::out_of_range("Tried to remove out of range");
  }

  if (trailer == nullptr){
    // we're removing the first item in the list
    head = walker->getNext();
    delete walker;
  } else {
    // general case of having a node before the
    // node to delete
    trailer->setNext(walker->getNext());
    delete walker;
  }
}

void stack::insert(int loc, std::string data){
  Node *walker, *trailer;
  walker = this->head;
  trailer = nullptr;
  
  while(loc>0 && walker != nullptr){
    loc=loc-1;
    trailer=walker;
    walker = walker->getNext();
  }

  if (loc > 0){
    throw std::out_of_range("Our insert is out of range");
  }

  Node *newNode = new Node(data);
  if (trailer == nullptr){
    newNode->setNext(head);
    head = newNode;
  }else{
    newNode->setNext(walker);
    trailer->setNext(newNode);
  }
}

void stack::toString(){
  Node *tmp = this->head;
  std::string result = "";
  while (tmp != nullptr){
    result = result + tmp->getData();
    result = result + "-->";
    tmp = tmp->getNext();
  }
  result = result + "nullptr";
  std::cout << result << "\n";
}

std::string stack::get(int loc){
  Node *walker = head;
  int count = 0;
  while (walker != nullptr && count < loc){
    walker = walker->getNext();
    count++;
  }
  if (walker == nullptr){
    return "nullptr";
  } else {
    return walker->getData();
  }
}

