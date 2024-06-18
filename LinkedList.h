#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
#include "Student.h"

class SortedLinkedList{
private:
   // Optional: Add any desired private functions here

public:
   Node* head;
   Node* tail;

   SortedNumberList() {
      head = nullptr;
      tail = nullptr;
   }

   
   // make it so it automatically adds it to the correct sorted position by mNumber
   void addItem(Student* student) {
      Node* node = new Node(student);
      Node* curnode;
      Node* nextnode;
    ////// Need to change to sort by mnumber
      if (head == nullptr){
         head = node;
         tail = node;
      } else {
         curnode = head;
         nextnode = curnode->GetNext();
         if (curnode->GetData() > node->GetData()){
            std::cout<< "Put it at da benining" << std::endl;
            head = node;
            node->SetNext(curnode);
            curnode->SetPrevious(node);
         } else{
            while (nextnode != nullptr and nextnode->GetData() <= node->GetData()){
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

   // Removes the node with the specified number value from the list. Returns
   // true if the node is found and removed, false otherwise.
   bool Remove(Student* student) { /// change to work for students
      Node* curnode; /// we want it to remove the node 
      Node* nextnode;
      Node* prevnode;
      curnode = head;
      while (curnode != nullptr and curnode->GetData() != number){
         curnode = curnode->GetNext();
      }
      if (curnode == nullptr) {
         return false;
      }
      nextnode = curnode->GetNext();
      prevnode = curnode->GetPrevious();
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
      return true;
   }
   
   //// get item
   Student* getItem(Node* node){
       /// returns student and removes it from the list 
   }
   
   /// is in list?
    bool isInList(Student* student){
        
    }
    
    /// is empty?
    bool isEmpty(){
        
    }
    
    /// size?
    int size(){
        
    }
    
    /// see next
    Student seeNext(Node* curnode){
        
    }
    
    /// see at
    Student seeNext(int index){
        /// index at 0 
        
    }
    
    /// reset
    void reset(Node* curnode){
        ///moves curnode to front of list
    }
    
    void deconstruct(Node* node){
        /// fix node conections
        /// deconstruct the student in the node 
        /// deconstruct node 
    }
    
};

#endif
