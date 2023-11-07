#include "Student.hpp"
#include <iostream>
#include <string>

using namespace std;
using namespace PersonNamespace;

namespace StudentNamespace {
    Student::Student(string newName, string newAddress, string newCNP, int newAge, string newUniversity)
        : Person(newName, newAddress, newCNP, newAge) {
        this->university = new char[newUniversity.length() + 1];
        strcpy(this->university, newUniversity.c_str());

        cout<<"student constructor called"<<endl;
    }

    void Student::setUniversity(string newUniversity) {
    strcpy(this->university, newUniversity.c_str());
    }

    char* Student::getUniversity() {
        return university;
    }

    // Destructor
    Student::~Student(){
        if(this->university != nullptr)
            cout << this->university << " has been DESTRUCTED!\n";
        else
            cout << "nullptr has been DESTRUCTED!\n";

        delete[] university;

        cout << "student destructor called" << endl;
    }
}