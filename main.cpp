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
    string FirstName,LastName, Mnumber, Birthday, GPAmaybe, PML;
    int call, Index;


    cout<< "Do you want to use the premade test list of students? (Yes or No): ";
    cin>> PML;
    cout<< endl;
    SortedLinkedList list;
    if(PML == "Yes" or PML == "yes"){
        list = createTestList();
    }

    cout<<"Linked list test program"<<endl;
    cout<<"1: Add item"<<endl;
    cout<<"2: Get item"<<endl;
    cout<<"3: Is in list?"<<endl;
    cout<<"4: Is empty?"<<endl;
    cout<<"5: Size"<<endl;
    cout<<"6: See next"<<endl;
    cout<<"7: See at"<<endl;
    cout<<"8: Reset"<<endl;
    cout<<"9: Display List"<<endl;
    cout<<"10: End run"<<endl;
    cout<<""<<endl;
    cout<<"Enter a function number (1-10): ";
    cin>> call;
    cout << endl;

    while(true){
        if (call==1) {
            double GPA = 0;
            cout<<"Input First Name: ";
            cin>> FirstName;
            cout<<endl << "Input Last Name: ";
            cin>> LastName;
            cout<<endl << "Input Mnumber (in the form M########): ";
            cin>> Mnumber;
            cout<<endl << "Input Birthday (in format of Month/Day/Year): ";
            cin>> Birthday;
            cout<<endl <<"Do you want to input a gpa? (Yes or No): ";
            cin>> GPAmaybe;
            if(GPAmaybe == "Yes"){
                cout<<endl << "Input the GPA: ";
                cin>>GPA;
            }
            Student* testStudent = new Student(FirstName, LastName, Mnumber, Birthday, GPA);
            list.addItem(testStudent);
        } else if (call==2) {
            cout<<"whats the Mnumber of the student you wish to get (Include the M): ";
            cin>> Mnumber;
            cout<<endl;
            Student stud = *list.getItem(Mnumber);
            stud.display();
        } else if (call==3) {
            cout<<"whats the Mnumber of the student you wish to find (Include the M): ";
            cin>> Mnumber;
            bool res = list.isInList(Mnumber);
            if(res){
                cout<<endl<< "A student with the Mnumber " << Mnumber <<" is in the List.";
            } else{
                cout<<endl<< "No student in the list has the Mnumber " << Mnumber <<".";
            }
        } else if (call==4) {
            bool res = list.isEmpty();
            if(res){
                cout<<endl<<"The list is empty."<<endl;
            }else{
                cout<<endl<<"The list is not empty."<<endl;
            }
        } else if (call==5) {
            int listsize = list.size();
            cout<<"The size of the list is "<< listsize<< "."<<endl;
        } else if (call==6) {
            Node* stud = list.seeNext();
            if(stud != nullptr){
                cout<<R"(The "See Next" function returned the student: )"<<endl;
                stud->GetData()->display();
                cout<< endl;
            }else{
                cout<<R"(The "See Next" function returned a nullptr meaning the end of the list has been reached.)" << endl;
            }
        } else if (call==7) {
            cout<<"Whats the index of the student?: "<<endl;
            cin>> Index;
            Node* stud = list.seeAt(Index);
            if(stud != nullptr){
                cout<<R"(The "SeeAt" function returned the student: )"<<endl;
                stud->GetData()->display();
            }else{
                cout<<R"(The "SeeAt" function returned a nullptr meaning the index was not in the range of the list.)" << endl;
            }
        } else if (call==8) {
            list.reset();
            cout<< "The SeeNext variable has been reset to point at the head of the list."<< endl;
        } else if (call==9) {
            if(list.isEmpty()){
                cout<< "No contents to display as list is empty."<< endl;
            }else{
                cout<<endl;
                list.display();
                cout<<endl;
            }
        } else if (call==10) {
            cout<<"Ending program"<<endl;
            return 0;
        } else {
            cout<<"Error: invalid function number"<<endl;
        }
        cout<<endl<<"Enter the next function number (1-10): ";
        cin>> call;
    }

    return 0;
}
