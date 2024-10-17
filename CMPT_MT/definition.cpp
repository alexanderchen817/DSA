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
        tail = newNode; // set tail as the new node since only 1 element in list
    } else {
        Node* newNode = new Node(s);
        // link the new node to ensure structure isn't broken
        this->tail->next = newNode; 
        this->tail = newNode; // update tail node 
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

void LinkedList::removeLast()
{
    // assume list is not empty

    // special case if there is only 1 element
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    } else {
        Node* current = head;
        while (current->next->next != nullptr) {
            current = current->next;
        }
        delete current->next;
        current->next = nullptr;
    }
}
void LinkedList::foo()
{
    bar(this->head);
}
void LinkedList::bar(Node* nd) 
{
    if (nd != nullptr && nd->next != nullptr && nd->next->next != nullptr) {
        if (nd->next->data < nd->next->next->data) {
            Node* p = nd->next;
            nd->next = nd->next->next;
            p->next = nd->next->next;
            nd->next->next = p;
            bar(nd->next->next);
        } else {
            bar(nd->next);
        }
    }
}
/// END OF LINKED LIST DEFINITIONS
