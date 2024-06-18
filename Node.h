#ifndef NODE_H
#define NODE_H

class Node {
protected:
   Student* data;
   Node* next;
   Node* previous;

public:
   // Constructs this node with the specified numerical data value. The next
   // and previous pointers are each assigned nullptr.
   Node(Student* student) {
      data = student;
      next = nullptr;
      previous = nullptr;
   }

   // Constructs this node with the specified numerical data value, next
   // pointer, and previous pointer.
   Node(Student* student, Node* nextNode, Node* previousNode) {
      data = student;
      next = nextNode;
      previous = previousNode;
   }

   virtual ~Node() {
   }

   // Returns this node's data.
   virtual double GetData() {
      return data;
   }

   // Sets this node's data.
   virtual void SetData(Student* newStudent) {
      data = newStudent;
   }

   // Gets this node's next pointer.
   virtual Node* GetNext() {
      return next;
   }

   // Sets this node's next pointer.
   virtual void SetNext(Node* newNext) {
      next = newNext;
   }

   // Gets this node's previous pointer.
   virtual Node* GetPrevious() {
      return previous;
   }

   // Sets this node's previous pointer.
   virtual void SetPrevious(Node* newPrevious) {
      previous = newPrevious;
   }
};

#endif
