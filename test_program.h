#ifndef TEST_PROGRAM_H
#define TEST_PROGRAM_H
#include <iostream>
#include <string>
#include <vector>
#include "Student.h"
#include "Node.h"
#include "sortedlinkedlist.h"
using namespace std;


SortedLinkedList createTestList(){
    vector<Student*> studentlist;
    Student* student = new Student("Josh", "Joseph", "M00000012", "4/27/2004", 3.5);
    studentlist.push_back(student);
    student = new Student("Paul", "Blart", "M00000999", "4/27/2009", 1);
    studentlist.push_back(student);
    student = new Student("John", "Doe", "M48275938", "4/23/1995", 3.2);
    studentlist.push_back(student);
    student = new Student("Jane", "Smith", "M09374612", "9/12/1998", 3.8);
    studentlist.push_back(student);
    student = new Student("Michael", "Brown", "M75920385", "11/6/1992", 2.9);
    studentlist.push_back(student);
    student = new Student("Emily", "Johnson", "M23104567", "3/15/1997", 3.5);
    studentlist.push_back(student);
    student = new Student("Chris", "Lee", "M00193847", "1/30/1999", 3.1);
    studentlist.push_back(student);
    student = new Student("Sarah", "Wilson", "M86049312", "7/22/1996", 3.6);
    studentlist.push_back(student);
    student = new Student("David", "Martinez", "M03572914", "5/17/1994", 2.8);
    studentlist.push_back(student);
    student = new Student("Sophia", "Garcia", "M92573658", "12/10/2000", 3.9);
    studentlist.push_back(student);
    student = new Student("James", "Anderson", "M04720195", "8/8/1993", 3.0);
    studentlist.push_back(student);
    student = new Student("Olivia", "Harris", "M35824760", "2/25/1998", 3.7);
    studentlist.push_back(student);
    student = new Student("Alice", "Baker", "M48274910", "3/12/1994", 3.4);
    studentlist.push_back(student);
    student = new Student("Bob", "Carter", "M37456123", "10/11/1997", 3.2);
    studentlist.push_back(student);
    student = new Student("Charlie", "Davis", "M91528374", "5/18/1992", 3.0);
    studentlist.push_back(student);
    student = new Student("Diana", "Evans", "M12547389", "11/25/1996", 3.6);
    studentlist.push_back(student);
    student = new Student("Ethan", "Foster", "M07829364", "6/30/1998", 3.9);
    studentlist.push_back(student);
    student = new Student("Fiona", "Gray", "M59284751", "2/14/1995", 3.1);
    studentlist.push_back(student);
    student = new Student("George", "Harris", "M00409382", "7/19/1993", 2.7);
    studentlist.push_back(student);
    student = new Student("Hannah", "Jackson", "M87530214", "9/27/1999", 3.5);
    studentlist.push_back(student);
    student = new Student("Ian", "Kelly", "M13487269", "12/22/1991", 3.3);
    studentlist.push_back(student);
    student = new Student("Julia", "Lewis", "M47382915", "8/5/1998", 3.8);
    studentlist.push_back(student);
    SortedLinkedList list;
    for (Student* student:studentlist){
        list.addItem(student);
    }
    return list;
}


void PrintStudentList(){
    SortedLinkedList list = createTestList();
    for (int i=0; i < list.size(); i++){
        Node* container = list.seeAt(i);
        Student* sc = container->GetData();
        cout << "Index: "<< i << " Name: " << sc->getname()<< " Mnumber: "<< sc->getMnum() << " Age: " << sc->getAge() << " GPA: " << sc->getgpa()<< endl;
        cout << endl;
    }
}

void PrintStudentList(SortedLinkedList list){
    for (int i=0; i < list.size(); i++){
        Node* container = list.seeAt(i);
        Student* sc = container->GetData();
        cout << "Index: "<< i << " Name: " << sc->getname()<< " Mnumber: "<< sc->getMnum() << " Age: " << sc->getAge() << " GPA: " << sc->getgpa()<< endl;
        cout << endl;
    }
}

bool TestEmpty(){
    SortedLinkedList list = createTestList(); //Creates and populates a test linked list
    if(list.isEmpty() == false){
        cout<<"isEmpty function works!! List actually contains " << list.size() << " students."<<endl;
        return true;
    }
    cout<<"isEmpty function does not work :( List is not empty."<<endl;
    return false;
}

bool TestStudentNode(){
    SortedLinkedList list = createTestList();
    Student* testStudent = new Student("Emily", "Johnson", "M23104567", "3/15/1997", 3.5);
    Node* studentnode = list.studentnode(testStudent);
    if(studentnode == list.seeAt(11)){
        cout << "The studentNode function found the right node!!" << endl;
        return true;
    }
    cout << "The studentNode function returned the wrong node :(." << endl;
    return false;
}


bool TestAddItem(){
    SortedLinkedList list = createTestList();
    Student* newStudent = new Student("Yes", "Man", "M23102108", "8/1/2001", 2.25);
    string results;
    list.addItem(newStudent);
    if(list.isInList(newStudent)){
        results = "Students are able to be added to the list!!";
    }else{
        results = "Students were not able to be added to the list :(.";
    }
    int numCorrect = 0;
    Node* node = list.head;
    Node* nextNode = node->GetNext();
    int Mnum = node->GetData()->getMnumnum();
    for(int i = 0; i< 21; i++){
        if(Mnum >= nextNode->GetData()->getMnumnum()){ //Checks if all the students are properly sorted by Mnumber size in descending order
            numCorrect += 1;
        }
        Mnum = nextNode->GetData()->getMnumnum();
        nextNode = nextNode->GetNext();
    }
    if(numCorrect == 21){
        results += " Students are all placed in correct order!!";
        cout<< results << endl;
        if(results == "Students are able to be added to the list!! Students are all placed in correct order!!"){
            return true; // only return true if students are able to be added and placed in correct order
        }
        return false;
    } else{
        results += " Students are not in the right order :(.";
        results += " Students are all placed in the list in correct order!!";
        return false;
    }

}


bool TestRemoveStudent(){
    SortedLinkedList list = createTestList();
    Student* testStudent = list.seeAt(20)->GetData(); // test student is Paul Blart
    list.Remove(testStudent);
    if (!(list.isInList(testStudent))){
        cout<< "Student " << testStudent->getname()<<" was successfully removed from the list!!" << endl;
        return true;
    }
    cout<< "Student " << testStudent->getname()<<" was not removed from the list " << endl;
    return false;
}

bool TestRemoveNode(){
    SortedLinkedList list = createTestList();
    int index = 20;
    Node* node = list.seeAt(index);// node 20
    Student* testStudent = node->GetData(); // test student is Paul Blart
    list.Remove(node);
    if (!(list.isInList(testStudent))){
        cout<< "Node " << index <<" was successfully removed from the list!!" << endl;
        return true;
    }
    cout<< "Node " << index <<" was not removed from the list " << endl;
    return false;
}


bool TestGetItem(){
    SortedLinkedList list = createTestList();
    Node* testNode = list.seeAt(4);     // get a node to test
    Student* testStudent = testNode->GetData();      // save the student from the test node
    Student* studentRecieved = list.getItem(testNode);    // call getItem with test node
    string studentTest;
    if(testStudent == studentRecieved){    // check if the student recieved is the same as the student saved
        studentTest = "correct";
    } else{
        studentTest = "wrong";
    }
    if(!(list.isInList(studentRecieved))){ // check if the node has been removed from the list
        cout<< "The " << studentTest << " student was returned and the student/node has been removed!!" << endl;
        if(studentTest ==  "correct"){ // only return true if both the correct student was returned and the node was removed
            return true;
        } else{
            return false;
        }
    }else{
        cout<< "The " << studentTest << " student was returned and the student/node was not removed :(." << endl;
        return false;
    }
}

bool TestIsInList(){
    SortedLinkedList list = createTestList();
    Student* testStudent1 = list.seeAt(20)->GetData(); // creates a student in the list
    Student* testStudent2 = new Student("Jasper", "Gains", "M12345678", "1/1/1632", 0.1); // creates a student not in the list
    string results;
    if(list.isInList(testStudent1)){
        results = "Students in the list are correctly identified to be in the list!! ";
    }else{
        results = "Students in the list are were wrongly identified to not be in the list :(. ";
    }
    if(!(list.isInList(testStudent2))){
        results = results + "Students not in the list are correctly identified to not be in the list!!";
        cout<< results << endl;
        if(results == "Students in the list are correctly identified to be in the list!! Students not in the list are correctly identified to not be in the list!!"){
            return true; // returns true if students in and out of the list were correctly identified
        }
        return false;
    } else{
        results = results + "Students not in the list were wrongly identified to be in the list :(.";
        cout<< results << endl;
        return false;
    }
}


bool TestSize(){
    SortedLinkedList emptyList;
    SortedLinkedList fullList = createTestList();
    if(emptyList.size() == 0 and fullList.size() == 22){ // checks if "size()" can correctly identify an empty list and a list of size 22
        cout<<"List size assessed correctly!!" << endl;
        return true;
    }else{
        cout<<"List size is wrong :(." <<endl;
        return false;
    }
}


bool TestSeeNext(){
    SortedLinkedList list = createTestList();
    int numCorrect = 0;
    Node* node = list.head;
    for(int i = 0; i< 22; i++){
        if(node == list.seeNext()){ //Uses seeNext to go through every node in the list and checks if they are returned correctly
            numCorrect += 1;
        }
        node = node->GetNext();
    }
    list.reset();
    for(int i = 0; i< 22; i++){
        if(list.seeNext() == list.seeAt(i)){ //Uses seeNext and seeAt to go through every node in the list and checks if they are returned correctly
            numCorrect += 1; // checks if the seeNex
        }
    }
    if(list.seeNext() == nullptr){ // checks if see next will return nullptr when looking outside list
        numCorrect += 1;
    }
    if(numCorrect == 45){
        cout<<"The seeNext function works!!"<<endl;
        return true;
    }else{
        cout<<"The seeNext function does not work :(."<<endl;
        return false;
    }
}

bool TestSeeAt(){
    SortedLinkedList list = createTestList();
    int numCorrect = 0;
    Node* node = list.head;
    for(int i = 0; i< 22; i++){
        if(node == list.seeAt(i)){ //Uses seeNext to go through every node in the list and checks if they are returned correctly
            numCorrect += 1;
        }
        node = node->GetNext();
    }
    if(numCorrect == 22){
        cout<<"The seeAt function works!!"<<endl;
        return true;
    }else{
        cout<<"The seeAt function does not work :(."<<endl;
        return false;
    }
}



bool TestReset(){
    SortedLinkedList list = createTestList();
    list.reset();
    if(list.NextNode == list.head and list.NextNodeTrigger == 1){
        cout<<"Reset function works!"<<endl;
        return true;
    }else{
        cout<<"Reset function does not works :(."<<endl;
        return false;
    }
}

#endif // TEST_PROGRAM_H
