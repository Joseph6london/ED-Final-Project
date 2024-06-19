#ifndef TEST_PROGRAM_H
#define TEST_PROGRAM_H
#include <iostream>
#include <string>
#include <vector>
#include "Student.h"
#include "Node.h"
#include "sortedlinkedlist.h"
using namespace std;

vector<Student*> createTestList(){
    vector<Student*> studentlist;
    Student* student = new Student("Josh", "Joseph", "M00000012", "4/27/2004", 3.5);
    studentlist.push_back(student);
    student = new Student("Paul", "Blart", "M00000999", "4/27/2009", 1);
    studentlist.push_back(student);
    student = new Student("John", "Doe", "M48275938", "1995/04/23", 3.2);
    studentlist.push_back(student);
    student = new Student("Jane", "Smith", "M09374612", "1998/09/12", 3.8);
    studentlist.push_back(student);
    student = new Student("Michael", "Brown", "M75920385", "1992/11/06", 2.9);
    studentlist.push_back(student);
    student = new Student("Emily", "Johnson", "M23104567", "1997/03/15", 3.5);
    studentlist.push_back(student);
    student = new Student("Chris", "Lee", "M00193847", "1999/01/30", 3.1);
    studentlist.push_back(student);
    student = new Student("Sarah", "Wilson", "M86049312", "1996/07/22", 3.6);
    studentlist.push_back(student);
    student = new Student("David", "Martinez", "M03572914", "1994/05/17", 2.8);
    studentlist.push_back(student);
    student = new Student("Sophia", "Garcia", "M92573658", "2000/12/10", 3.9);
    studentlist.push_back(student);
    student = new Student("James", "Anderson", "M04720195", "1993/08/08", 3.0);
    studentlist.push_back(student);
    student = new Student("Olivia", "Harris", "M35824760", "1998/02/25", 3.7);
    studentlist.push_back(student);
    return studentlist;
}

#endif // TEST_PROGRAM_H
