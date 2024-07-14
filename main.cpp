#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Student.h"
#include "Node.h"
#include "sortedlinkedlist.h"
#include "test_program.h"
#include "text_to_askii_dictionary.h"
#include <limits>
using namespace std;

int main()
{
    string FirstName,LastName, Mnumber, Birthday;
    double GPA = 0;
    int call, Index;
    bool GPAmaybe;
    cout<<"Linked list test program"<<endl;
    //cout<<"1: Constructor"<<endl;
    cout<<"2: Add item"<<endl;
    cout<<"3: Get item"<<endl;
    cout<<"4: Is in list?"<<endl;
    cout<<"5: Is empty?"<<endl;
    cout<<"6: Size"<<endl;
    cout<<"7: See next"<<endl;
    cout<<"8: See at"<<endl;
    cout<<"9: Reset"<<endl;
    //cout<<"10: Destructor"<<endl;
    cout<<"11: End run"<<endl;
    cout<<""<<endl;
    cout<<"Enter a function number (1-10)"<<endl;
    cin>> call;
    cout << call << endl;
    SortedLinkedList list;
    if (call==1) {
        cout<<"Input First Name"<<endl;
        cin>> FirstName;
        cout<<"Do you want to input a gpa "<<endl;
        cin>> GPAmaybe;
        Student* testStudent = new Student(FirstName, LastName, Mnumber, Birthday, GPA);
        list.addItem(testStudent);
    } else if (call==2) {
        cout<<"whats the Mnumber of the student you wish to get (Include the M)"<<endl;
        cin>> Mnumber;
        list.getItem(Mnumber);
    } else if (call==3) {
        cout<<"whats the Mnumber of the student you wish to find (Include the M)"<<endl;
        cin>> Mnumber;
        list.isInList(Mnumber);
    } else if (call==4) {
        cout<<""<<endl;
        list.isEmpty();
    } else if (call==5) {
        cout<<""<<endl;
        list.size();
    } else if (call==6) {
        cout<<""<<endl;
        list.seeNext();
    } else if (call==7) {
        cout<<"Whats the index of the student?: "<<endl;
        cin>> Index;
        list.seeAt(Index);
    } else if (call==8) {
        list.reset();
    } else if (call==9) {
        cout<<""<<endl;
        cin>>;
    } else if (call==10) {
        cout<<"Ending program"<<endl;
        return 0;
    } else {
        cout<<"Error: invalid function number"<<endl;
    }
    return 0;
}
