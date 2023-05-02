#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "node.h"
#include "stack.h"
#include "queue.h"
/*
1-> Constructor(s)
2-> enqueue(int) (you can change to std::string if you wish) // add an item to the back of the queue
3-> int dequeue() // remove and return the item from the front of the queue
4-> int front() // return but do not remove the item from the front of the queue
5-> bool is_empty()
6-> bool is_full()->
*/
// Tests
TEST_CASE("stack"){
    stack *test = new stack;
    CHECK(test -> is_empty() == true);
    test -> push("5");
    test -> push("7");
    test -> push("3");
    CHECK(test->toString() == "5-->7-->3-->nullptr");
    test -> push("9");
    test -> push("5");
    test -> push("2");
    test -> push("1");
    test -> toString();
    CHECK(test -> pop() == "1");
    test -> toString();
    CHECK(test -> top() == "2");
    CHECK(test -> is_empty() == false);
};

TEST_CASE("queue"){
    queue *testCase = new queue;
    CHECK(testCase->is_empty() == true);
    testCase->enqueue(4);
    CHECK(testCase->is_empty() == false);
    testCase->enqueue(3);
    testCase->enqueue(7);
    testCase->enqueue(6);
    testCase->enqueue(39);
    testCase->enqueue(0);
    testCase->enqueue(21);
    CHECK(testCase->is_full() == false);
    testCase->enqueue(5);
    testCase->enqueue(83);
    testCase->enqueue(9);
    CHECK(testCase->is_full() == true);
    CHECK(testCase->dequeue() == 4);
    CHECK(testCase->dequeue() == 3);
    CHECK(testCase->dequeue() == 7);
    testCase->enqueue(71);
    testCase->enqueue(21);
    CHECK(testCase->front() == 6);
};
