#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
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
    vector<int> getBeforeSlash(string str){
        vector<int> date;
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

    /// get name
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
        vector<int> Bdate = getBeforeSlash(Birthday);
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

    virtual double getgpa(){
        return GPA;
    }
};

#endif // STUDENT_H
