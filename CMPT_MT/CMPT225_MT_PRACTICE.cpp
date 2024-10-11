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
    string text = "hello";
    list.insertBack(text);
    // list.printList();
    list.insertFront("hi");
    // cout << endl;
    // list.printList();
    list.insertBack("DO NOT REDEEM");
    // cout << endl;
    // list.printList();
    // cout << list.getItem(1) << endl;
    list.reverseList();
    // cout << endl;
    list.printList();
    return 0;
}