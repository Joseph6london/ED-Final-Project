#ifndef STUDENT_H
#define STUDENT_H

class Student{
protected:
    string firstName;
    string lastName;
    string Mnumber;
    double GPA;
    string Birthday; 
    // vector Bday;

public:
    ///Constructor 
    Student(string Fname, string Lname, string Mnum, double gpa = 0, string Bday){
        
    }
    
    /// get name 
    virtual string getname(Student* student){
        
    }
    
    ///get Mnumber 
    virtual string getMnum(Student* student){
        
    }
    
    // get age
    virtual double getMnum(Student* student){
        
    }
    
    //overloads for > < = 
    // takes 2 string mnumbers
    // removes m and converts to int
    // then compares
    // create for each > < =
    
};

#endif
