#include <iostream>
#include <string>
#include <vector>

using namespace std;

class StringList 
{
private:
    struct CNode
    {
        string data;
        CNode* next;
    }; // struct CNode
    CNode* head;
public:

    // default constructor 
    StringList() 
    {
        // initialize an empty list 
        head = nullptr;
    } // Cnode

    // add an item to the linked list 
    void addItem(string& item) 
    {
        if (head == nullptr) {
            // add item if the list is empty
            CNode* newHead = new CNode();
            head = newHead;
            head->next = nullptr;
            head->data = item;
        } else {
            // if we want to add a new item, we must traverse to the end of the list
            // so that we can find the last item that points to nullptr
            CNode* current = head;
            // find the last element and check that it points to the nullptr
            while (current->next != nullptr) {
                current = current->next;
            }

            CNode* newNode = new CNode();
            // assign the next element to the new allocated node
            current->next = newNode;
            // 
            newNode->data = item;
            newNode->next = nullptr;
        }
    } // Cnode

    void printList() const 
    {
        CNode* current = head;
        while(current != nullptr) {
            cout << current->data << endl;
            // traverse to next node
            current = current->next;
        }
    } // printList

    void removeLast() 
    {
        // if the list is empty 
        if (head == nullptr) {
            cout << "Nothing to remove." << endl;
            return;
        } 

        // grab the head and traverse through the list
        // recall that linked lists is one direction only. 
        CNode* current = head;
        while (current->next->next != nullptr) {
            current = current->next;
        }
        // note: if there is no next next, the while loop doesn't run!
        // delete the last node
        delete current->next;
        // now the 2nd last item is pointing to nullptr as it is now the last item
        current->next = nullptr;
    } // removeLast()

    void reverseList()
    {
        // create temp variables to traverse the list 
        CNode* temp_prev = nullptr;
        CNode* current = head;
        CNode* temp_next = nullptr;
        
        while (current != nullptr) {
            temp_next = current->next;
            current->next = temp_prev;
            temp_prev = current;
            current = temp_next;
        }

        head = temp_prev;
    } // reverseList()
    
    // empty destructor
    ~StringList() {}
}; // class StringList 


int main()
{
    StringList* list = new StringList();
    string maam = "MA'AM";
    string DO_NOT = "DO NOT REDEEM";
    string CARD = "THE CARD";
    list->addItem(maam);
    list->addItem(DO_NOT);
    list->addItem(CARD);
    //list->printList();
    //cout << endl;
    //list->removeLast();
    // list->printList();
    list->reverseList();
    list->printList();
    return 0;
    
}
