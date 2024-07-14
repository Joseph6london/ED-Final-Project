#include <iostream>
#include <string>
#include <vector>
#include "Student.h"
#include "Node.h"
#include "LinkedList.h"

using namespace std;

int main() {
    int call;
    cout<<"Linked list test program"<<endl;
    cout<<"1: Constructor"<<endl;
    cout<<"2: Add item"<<endl;
    cout<<"3: Get item"<<endl;
    cout<<"4: Is in list?"<<endl;
    cout<<"5: Is empty?"<<endl;
    cout<<"6: Size"<<endl;
    cout<<"7: See next"<<endl;
    cout<<"8: See at"<<endl;
    cout<<"9: Reset"<<endl;
    cout<<"10: Destructor"<<endl;
    cout<<"11: End run"<<endl;
    cout<<""<<endl;
    cout<<"Enter a function number (1-10)"<<endl;
    cin>>call;

    if (call==1) {
        cout<<""<<endl;
        cin>>;
    } else if (call==2) {
        cout<<""<<endl;
        cin>>;
    } else if (call==3) {
        cout<<""<<endl;
        cin>>;
    } else if (call==4) {
        cout<<""<<endl;
        cin>>;
    } else if (call==5) {
        cout<<""<<endl;
        cin>>;
    } else if (call==6) {
        cout<<""<<endl;
        cin>>;
    } else if (call==7) {
        cout<<""<<endl;
        cin>>;
    } else if (call==8) {
        cout<<""<<endl;
        cin>>;
    } else if (call==9) {
        cout<<""<<endl;
        cin>>;
    } else if (call==10) {
        cout<<""<<endl;
        cin>>;
    } else if (call==11) {
        cout<<"Ending program"<<endl;
        return 0;
    } else {
        cout<<"Error: invalid function number"<<endl;
    }
    return 0;
}
