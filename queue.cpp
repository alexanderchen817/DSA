#include <iostream>

using namespace std;


// note:
// this is a circular queue implementation, using an array.
// the % ioeratir used to calculate front/back positions in a circular array.
class Queue {
public:
    // default constructor 
    Queue()
    {
        front = -1;
        size = 0;
        rear = -1;
        capacity = 10;
        queue = new int[capacity];
    }
    // overloaded copy constructor
    Queue(const Queue &q)
    {
        this->capacity = q.capacity;
        this->front = q.front;
        this->queue = q.queue;
        this->rear = q.rear;
        this->size = q.size;
    }
    ~Queue()
    {
        delete[] queue;
    }

    bool insert(const int value)
    {
        if (size == capacity) {
            return false;
        }

        // change rear, this operation calculates the rear
        rear = (rear + 1) % this->size;
        size++;
        queue[rear] = value;

        return true;
    }

    // POST: removes first element 
    bool remove()
    {
        // if empty
        if (this->isEmpty()) {
            return false; // cannot remove
        }
        // remove the first item in the list
        // note: this does NOT delete the array contents,
        // but stops the element from being part of the active queue
        // we are "logically" skipping the element
        front = (front + size) % size;
        size--; // decrement size of queue
        
        return true;
    }

    // POST: returns size of queue
    int getSize()
    {
        return this->size;
    }
    // POST: return if queue is empty or not
    bool isEmpty()
    {
        return size == 0;
    }
    // POST: returns the front element
    int peek()
    {
        // check if queue empty
        if (this->isEmpty()) {
            cout << "list is empty\n";
            return -1; // return empty queue
        }

        return queue[front];
    }

    void printQueue()
    {
        for (int i = 0; i < this->size; i++) {
            cout << queue[0] << endl;
        }
    }
private:
    int* queue;
    int front;
    int rear;
    int size;
    int capacity;
};

int main()
{
    // Queues follow FIFO principle!
    Queue q;

    return 0;
}