#ifndef INTERFACESTUDENT_H
#define INTERFACESTUDENT_H

#include <string>
using namespace std;

class InterfacePerson {
    virtual void setName(string name) = 0;
    virtual char* getName() = 0;

    virtual void setAddress(string address) = 0;
    virtual char* getAddress() = 0;

    virtual void setCNP(string CNP) = 0;
    virtual char* getCNP() = 0;
        
    virtual void setAge(int salary) = 0;
    virtual int getAge() = 0;
};

#endif