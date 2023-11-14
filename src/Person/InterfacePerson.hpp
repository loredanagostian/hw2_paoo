#ifndef INTERFACESTUDENT_H
#define INTERFACESTUDENT_H

class InterfacePerson {
    public:
        virtual void setName(std::string name) = 0;
        virtual char* getName() = 0;

        virtual void setAddress(std::string address) = 0;
        virtual char* getAddress() = 0;

        virtual void setCNP(std::string CNP) = 0;
        virtual char* getCNP() = 0;

        virtual void setAge(int salary) = 0;
        virtual int getAge() = 0;
};

#endif