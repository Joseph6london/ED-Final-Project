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
/*
bool TestAddItem(){

}
*/
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

/*
bool TestGetItem(Node* node){

}

bool TestIsInList(Student* student){

}

bool TestSize(){

}

bool TestSeeNext(){

}

bool TestSeeAt(int index){

}

bool TestReset(){

}
*/
#endif // TEST_PROGRAM_H

