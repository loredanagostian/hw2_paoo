#ifndef STUDENT_H
#define STUDENT_H

#include "Person.hpp"
#include <string>

using namespace std;

class Student : public Person {
    private: 
    char* university; 

    public:
    Student(string name, string address, string CNP, int age, string university);

    void setUniversity(string university);
    char* getUniversity();

    // destructor
    ~Student();
};

#endif