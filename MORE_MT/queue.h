#pragma once
#include <string>

using std::string;

// IMPLEMENT A QUEUE OF INTS
class Queue
{
private:
    int size;
    int capacity;
    int rear;
    int front;
    int* arr;
public:
    Queue();
    ~Queue();

    // adds item to the queue 
    // changes rear and size
    void enqueue(const int &item);

    // removes and returns an item from queue
    // changes size and front
    void dequeue();

    // getters
    int getFront() const;
    int getRear() const;
    bool isEmpty() const;
    bool isFull() const;
    int getSize() const;
    void print() const;
};