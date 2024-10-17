#include <iostream>
#include <string>
#include "queue.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::getline;

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.print();
    cout << endl;

    q.dequeue();
    q.print();
    cout << "front item: " << q.getFront() << endl;
    cout << "rear item: " << q.getRear() << endl;
}