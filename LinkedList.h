#ifndef SORTEDLINKEDLIST_H
#define SORTEDLINKEDLIST_H
#include "Node.h"
#include "Student.h"
using namespace std;

class SortedLinkedList{
public:
    Node* head;
    Node* tail;
    Node* NextNode; // keeps track of the current node used in seeNext seeAt and reset
    int NextNodeTrigger; // used to tell if NextNode has already been used

    SortedLinkedList() {
        head = nullptr;
        tail = nullptr;
        NextNode = nullptr;
        NextNodeTrigger = 0;
    }

    Node* studentnode(Student* student){
        Node* curnode = head;
        if (head == nullptr){
            return curnode;
        }
        Student* stud = curnode->GetData();
        while ( stud->getAge() != student->getAge() or stud->getgpa() != student->getgpa() or  stud->getMnum() != student->getMnum()
                or stud->getname() != student->getname()){ // checks to see if all the student data match
            curnode = curnode->GetNext();
            if (curnode == nullptr){ // Checks if the end of the list has been reached
                return curnode;
            }
            stud = curnode->GetData();
        }
        return curnode;
    }

    // make it so it automatically adds it to the correct sorted position by mNumber
    void addItem(Student* student) {
        Node* node = new Node(student);
        int Mnum = student->getMnumnum();
        Node* curnode;
        Node* nextnode;
        ////// Need to change to sort by mnumber
        if (head == nullptr){
            head = node;
            tail = node;
        } else {
            curnode = head;
            nextnode = curnode->GetNext();
            int curMnum = curnode->GetData()->getMnumnum();
            if (curMnum < Mnum){
                head = node;
                node->SetNext(curnode);
                curnode->SetPrevious(node);
            } else{
                while (nextnode != nullptr and nextnode->GetData()->getMnum() >= node->GetData()->getMnum()){
                    curnode = nextnode;
                    nextnode = nextnode->GetNext();
                }
                node->SetNext(nextnode);
                node->SetPrevious(curnode);
                curnode->SetNext(node);
                if (node->GetNext() != nullptr){
                    nextnode->SetPrevious(node);
                } else{
                    tail = node;
                }
            }
        }
    }

    // Removes the node with the specified student from the list. Returns
    // true if the node is found and removed, false otherwise.
    bool Remove(Student* student) {
        Node* node = studentnode(student);
        Node* nextnode;
        Node* prevnode;
        if (node == nullptr) {
            return false;
        }
        nextnode = node->GetNext();
        prevnode = node->GetPrevious();
        if (nextnode != nullptr){
            nextnode->SetPrevious(prevnode);
        } else{
            tail = prevnode;
        }
        if (prevnode != nullptr){
            prevnode->SetNext(nextnode);
        } else{
            head = nextnode;
        }
        if (NextNode == node){
            NextNode = nextnode; // if NextNode was the node removed change current node to the next node
        }
        return true;
    }

    bool Remove(Node* node) {
        Node* nextnode;
        Node* prevnode;
        if (node == nullptr) {
            return false;
        }
        nextnode = node->GetNext();
        prevnode = node->GetPrevious();
        if (nextnode != nullptr){
            nextnode->SetPrevious(prevnode);
        } else{
            tail = prevnode;
        }
        if (prevnode != nullptr){
            prevnode->SetNext(nextnode);
        } else{
            head = nextnode;
        }
        if (NextNode == node){
            NextNode = nextnode; // if NextNode was the node removed change current node to the next node
        }
        return true;
    }

    //// get item
    Student* getItem(Node* node){ ///Returns the student and removes the node containing the student from the list
        Student* student = node->GetData();
        Remove(node);
        /// returns student and removes it from the list
        return student;
    }

    /// is in list?
    bool isInList(Student* student){
        Node* node = studentnode(student); // Uses "studentnode" function which returns nullptr if student is not in the list
        if (node == nullptr){
            return false;
        }
        return true;
    }

    /// is empty?
    bool isEmpty(){
        if(head == nullptr){
            return true;
        }
        return false;
    }

    /// size?
    int size(){
        int count = 0;
        if (isEmpty()){
            return count;
        }
        Node* curnode = head;
        while (curnode != nullptr){
            count += 1;
            curnode = curnode->GetNext();
        }
        return count;
    }

    /// see next
    Node* seeNext(){
        if (isEmpty()){ // checks if list is empty
            throw std::exception();
        }
        if (NextNodeTrigger == 0){ // checks if currrentNode has been changed before
            NextNode = head;
            NextNodeTrigger = 1;
        }
        Node* node = NextNode;
        if(!(node == nullptr)){ // if the current node is a nullptr then "NextNode->GetNext()" will crash
            NextNode = NextNode->GetNext(); // moves NextNode to the next node
        }
        return node;
    }


    /// see at
    /// Returns the node at that index
    /// throws error if index is outside of the lists range
    Node* seeAt(int index){ /// index starts at 0
        if (index > size()-1 or index < 0){ //checks if index is within list bounds
            throw std::exception();
        }
        Node* curnode = head;
        for(int i = 0; i < index; i++){ // find the node at index
            curnode = curnode->GetNext();
        }

        NextNode = curnode->GetNext();
        NextNodeTrigger = 1;
        return curnode;
    }

    ///reset
    ///resets the currentNode location to the start of the list
    void reset(){
        NextNode = head;
        NextNodeTrigger = 1;
    }

    //Destructor
    virtual ~SortedLinkedList(){
    }

};

#endif // SORTEDLINKEDLIST_H

