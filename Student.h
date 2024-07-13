#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include "text_to_askii_dictionary.h"
using namespace std;

class Student{
protected:
    string firstName;
    string lastName;
    string Mnumber;
    double GPA;
    string Birthday;
    const vector<int> Date = {6,18,2024};

    // used for converting string dates into vectors of numbers
    vector<double> getBeforeSlash(string str){
        vector<double> date;
        for(int j = 0; j < 2; j++){
            int i = 0;
            string temp = str;
            while(str[i] != '/'){
                i += 1;
            }
            temp.erase(i,temp.size());
            date.push_back(stoi(temp));
            str.erase(0,i+1);
        }
        date.push_back(stoi(str));
        return date;
    }

public:

    ///Constructor
    Student(string Fname, string Lname, string Mnum, string Bday, double gpa = 0){
        firstName = Fname;
        lastName = Lname;
        Mnumber = Mnum;
        GPA = gpa;
        Birthday = Bday;
    }

    virtual ~Student() {
    }

    // outputs the Name, GPA and Mnumner of the student in Askii art
    void display(){
        string text = "Student: "+this->getname();
        printAskii(text);
        bigSpace();
        text = "Mnumber: " + this->getMnum();
        printAskii(text);
        bigSpace();

        string gpa = to_string(this->getgpa());

        for(int i = gpa.length() -1; i > 2 ; i--){
            if(gpa[i] == '0'){
                gpa.pop_back();
            }
        }
        text = "GPA: " + gpa;
        printAskii(text);
    }

    // Returns the name of the student
    virtual string getname(){
        return firstName + lastName;
    }


    ///get Mnumbernumber
    /// removes m and leading zeros then converts returns the rest as an int
    virtual int getMnumnum(){
        string temp = Mnumber; // creates temp so original Mnumber is not altered
        int i = 1;
        while(temp[i] == '0'){
            i += 1;
        }
        temp.erase(0,i);
        return stoi(temp);
    }

    // get Mbumber
    virtual string getMnum(){
        return Mnumber;
    }
    // get age
    virtual double getAge(){
        double age;
        vector<double> Bdate = getBeforeSlash(Birthday);
        age = Date[2]-Bdate[2] + (Date[0]-Bdate[0])/12 + (Date[1]-Bdate[1])/365; // calculates age in years
        age = round(age * 10000.0) / 10000.0; // rounds age to 4 decimal places
        return age;
    }

/*
    //overloads for > < =
    // takes 2 string mnumbers
    // removes m and converts to int
    // then compares
    // create for each > < =
*/

    bool operator<(const Student& other)const{
        return Mnumber<other.Mnumber;
    }

    bool operator>(const Student& other)const{
        return Mnumber>other.Mnumber;
    }

    bool operator==(const Student& other)const{
        return Mnumber==other.Mnumber;
    }

    virtual double getgpa(){
        return GPA;
    }
};

#endif // STUDENT_H
