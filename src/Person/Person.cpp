#include <stdlib.h>
#include "Person.hpp"
#include <string>

using namespace std;

namespace PersonNamespace {
    // Constructor
    Person::Person(string newName, string newAddress, string newCNP, int newAge){
        this->name = new char[newName.length() + 1];
        strcpy(this->name, newName.c_str());

        this->address = new char[newAddress.length() + 1];
        strcpy(this->address, newAddress.c_str());

        this->CNP = new char[newCNP.length() + 1];
        strcpy(this->CNP, newCNP.c_str());

        this->age = newAge;

        cout<<"constructor called"<<endl;
    }

    // Name
    void Person::setName(string newName){
        strcpy(this->name, newName.c_str());
    }

    char* Person::getName(){
        return name;
    }

    // Address
    void Person::setAddress(string newAdress){
        strcpy(this->address, newAdress.c_str());
    }

    char* Person::getAddress(){
        return address;
    }

    // CNP
    void Person::setCNP(string newCNP){
        strcpy(this->CNP, newCNP.c_str());
    }

    char* Person::getCNP() {
        return CNP;
    }

    // Age
    void Person::setAge(int newAge){
        age = newAge;
    }

    int Person::getAge(){
        return age;
    }

    // Destructor
    Person::~Person(){
        if(this->name != nullptr)
            cout << this->name << " has been DESTRUCTED!\n";
        else
            cout << "nullptr has been DESTRUCTED!\n";

        delete[] name;
        delete[] address;
        delete[] CNP;

        cout << "person destructor called" << endl;
    }

    // Copy Constructor
    Person::Person(const Person& person) {
        this->name = new char[strlen(person.name) + 1];
        strcpy(name, person.name);

        this->address = new char[strlen(person.address) + 1];
        strcpy(address, person.address);

        this->CNP = new char[strlen(person.CNP) + 1];
        strcpy(CNP, person.CNP);

        this->age = person.age;

        cout << "copy constructor called" << endl;
    }

    // Assignment Operator
    Person& Person::operator=(const Person& person) {
        if (this == &person) {
            return *this;
        }

        this->name = new char[strlen(person.name) + 1];
        strcpy(name, person.name);

        this->address = new char[strlen(person.address) + 1];
        strcpy(address, person.address);

        this->CNP = new char[strlen(person.CNP) + 1];
        strcpy(CNP, person.CNP);

        this->age = person.age;

        cout << "assignment operator called" << endl;

        return *this;
    }

    // Move constructor
    Person::Person(Person &&person) {
        this->name = new char[strlen(person.name) + 1];
        strcpy(name, person.name);

        this->address = new char[strlen(person.address) + 1];
        strcpy(address, person.address);

        this->CNP = new char[strlen(person.CNP) + 1];
        strcpy(CNP, person.CNP);

        this->age = person.age;

        person.name = nullptr;
        person.address = nullptr;
        person.CNP = nullptr;

        cout << this->name << " has been moved inside the MOVE CONSTRUCTOR!\n";
    }
}