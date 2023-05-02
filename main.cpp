#include <iostream>
#include "node.h"
#include "stack.h"
#include "queue.h"

int main(){
    stack *test = new stack;
    std::cout << "Is this stack empty: " << test -> is_empty() << "\n";
    test -> push("5");
    test -> push("7");
    test -> push("3");
    test -> push("9");
    test -> push("5");
    test -> push("2");
    test -> push("1");
    std::string stackString = test -> toString();
    std::cout << stackString << "\n";
    std::cout << test -> pop() << "\n";
    stackString = test -> toString();
    std::cout << stackString << "\n";
    std::cout << test -> top() << "\n";
    std::cout << "Is this stack empty: " << test -> is_empty() << "\n";
    int arr[5];
    return 0;
}