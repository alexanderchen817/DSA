#include <iostream>
#include "definition.h"
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;


int main()
{
    LinkedList list;
    list.insertBack("7");
    list.insertBack("5");
    list.insertBack("1");
    list.insertBack("42");
    list.insertBack("31");
    
    
    // list.printList();
    // cout << endl;
    // cout << "after calling special fn\n";
    // list.foo();
    // list.printList();
    // cout << "\n";
    
    LinkedList list2;
    list2.insertBack("a");
    list2.insertBack("b");
    list2.insertBack("c");
    list2.insertBack("d");
    list2.insertBack("e");
    list2.insertBack("f");

    list2.printList();
    cout << "\n";
    list2.reverseList();
    list2.printList();
    cout << "\n";
    list2.removeLast();
    list2.printList();
    return 0;
}