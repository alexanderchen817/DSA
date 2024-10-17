#include <iostream>
#include <string>
#include "queue.h"
using std::string;
using std::endl;
using std::cout;

Queue::Queue()
{
    this->capacity = 10;
    this->arr = new int[capacity];
    this->size = 0;
    this->front = 0;
    // note this is important
    this->rear = capacity - 1;
}

Queue::~Queue()
{
    delete[] arr;
}

// changes rear and size
void Queue::enqueue(const int &item)
{
    // first check if the queue is full
    if (isFull()) {
        // double array capacity
        int oldCapacity = capacity;
        capacity *= 2;
        int* newArr = new int[capacity];
        for (int i = 0; i < this->getSize(); i++) {
            newArr[i] = arr[(front + i) % oldCapacity];
        }
        delete[] arr;
        arr = newArr;


        // Reset front to 0 and adjust rear
        // this is because the capacity is bigger,
        // and all the elements are now in order sequentially 
        front = 0;
        rear = size - 1;
    }
    // change the rear 
    rear = (rear + 1) % capacity;
    arr[rear] = item;
    this->size++;
}

// changes size and front
void Queue::dequeue()
{
    // first check if the queue is empty before removing
    if (isEmpty()) {
        return;
    }

    this->front = (front + 1) % this->capacity;
    this->size--;
}

int Queue::getRear() const
{
    // first check if the the queue is empty
    if (isEmpty()) {
        return -1;
    }
    return arr[rear];
}

int Queue::getFront() const
{
    // first check if the queue is empty
    if (isEmpty()) {
        return -1;
    }
    return arr[front];
}

bool Queue::isFull() const
{
    return this->size == this->capacity;
}
bool Queue::isEmpty() const
{
    return this->size == 0;
}

int Queue::getSize() const
{
    return this->size;
}
void Queue::print() const
{
    // notice that this print loop works based off the mod operator
    for (int i = 0; i < this->getSize(); i++) {
        cout << arr[(front + i) % capacity] << endl;
    }
}

