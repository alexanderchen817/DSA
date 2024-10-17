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
    void peek() const;
};


// Create stack using Linked list
class SLLStack {
private:
    string data;
    int stackSize;
    string* arr;
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
public:
    SLLStack();
    void pop();
    void push();
    void peek() const;
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
    void removeLast();
    string getItem(int pos) const;
    
    void printList() const;
    void bar(Node* nd);
    void foo();
};

