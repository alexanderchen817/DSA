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
    q.enqueue(42);
    q.print();
    cout << endl;
    q.enqueue(50);
    q.enqueue(10);
    q.print();
    cout << endl;
}