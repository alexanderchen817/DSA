#include "definition.h"
#include <iostream>

using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::getline;

/// LINKED LIST DEFINITIONS
LinkedList::LinkedList()
{
    this->head = nullptr;
    this->tail = nullptr;
}

LinkedList::~LinkedList()
{
    Node* current = head;
    Node* temp = nullptr;
    while (current != nullptr) {
        temp = current->next;
        delete current;
        current = temp;
    }
}
void LinkedList::insertBack(const string &s)
{
    // NOTE O(1) INSERTION IS ONLY POSSIBLE BY TAIL NODE
    if (head == nullptr) {
        Node* newNode = new Node(s);
        head = newNode;
        tail = newNode; // the tail must be the only element in the list!
    } else {
        Node* newNode = new Node(s);
        this->tail->next = newNode; // don't forget about the tail
        this->tail = newNode; // set tail node to the new last node
        
    }
}

void LinkedList::insertFront(const string &s)
{
    // insertion at the front in O(1) time
    Node* newNode = new Node(s);
    newNode->next = head;
    head = newNode; // set head to new node
}

void LinkedList::printList() const
{
    Node* current = head;
    int idx = 0;
    while (current != nullptr) {
        cout << idx << ": ";
        cout << current->data << endl;
        current = current->next;
        idx++; // increment display index
    }
}

string LinkedList::getItem(int pos) const
{
    Node* current = head;
    for (int i = 0; i < pos; i++) {
        current = current->next;
    }
    return current->data;
}

void LinkedList::reverseList()
{
    Node* next = nullptr;
    Node* current = head;
    Node* prev = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev; // don't forget to set the new head
}
/// END OF LINKED LIST DEFINITIONS
