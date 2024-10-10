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
    };
    Node* head;
    Node* tail;
public: 
    LinkedList();
    // overloaded constructor 
    LinkedList(string data, Node* next);

    // insert() at tail in O(1) time 
    void insert(int pos);

    void insertBack();

    void insertFront();

    void remove();

    string getItem(int pos) const;
    
    void printList() const;
};


// Create stack using Linked list
