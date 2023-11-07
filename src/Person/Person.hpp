#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <utility>
#include <string.h>
#include <cstring>
#include <InterfacePerson.hpp>

using namespace std;

namespace PersonNamespace {
    class Person : public InterfacePerson{
        private:
            char* name;
            char* address;
            char* CNP;
            int age;

        public:
            // constructor
            Person(string name, string address, string CNP, int age);

            // name
            void setName(string name);
            char* getName();

            // address
            void setAddress(string address);
            char* getAddress();

            // CNP
            void setCNP(string CNP);
            char* getCNP();

            // age
            void setAge(int age);
            int getAge();

            // destructor
            ~Person();

            // copy constructor
            Person(const Person& person);

            // assignment operator
            Person& operator=(const Person& person);

            // move constructor
            Person(Person &&person);
     };
}

#endif