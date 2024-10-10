#pragma once
#include <string> 
#include <iostream>
using std::string;

// Create Stack of strings using Dynamic array
class Stack {
private:
    string data;
    int stackSize;
    string* arr;
public:
    Stack();
    void pop();
    void push();
    void peek();
};

// create standard linked list of strings
class LinkedList 
{
private: 
    class Node 
    {
    public:
        string data;
        Node* next;
        Node() 
        {
            data = "";
            next = nullptr;
        }
        Node(const string &s)
        {
            data = s;
            next = nullptr;
        }
    };
    Node* head;
    Node* tail;
public: 
    LinkedList();

    // destructor
    ~LinkedList();
    // insert() at tail in O(1) time 
    void insert(int pos);

    void insertBack(const string &s);

    void insertFront(const string &s);

    void remove();
    void reverseList();

    string getItem(int pos) const;
    
    void printList() const;
};


// Create stack using Linked list
