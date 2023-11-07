#include "/Users/loredanagostian/Desktop/hw2_paoo/src/Person/Person.hpp"
#include "/Users/loredanagostian/Desktop/hw2_paoo/src/Student/Student.hpp"
#include <string>
#include <iostream>

using namespace PersonNamespace;
using namespace StudentNamespace;
using namespace std;

int main(){
    PersonNamespace::Person person1 = PersonNamespace::Person("Andrei", "Timisoara", "123123", 24); // init
    PersonNamespace::Person person2 = person1; // copy
    PersonNamespace::Person person3 = person1; // copy
    person3 = person2; // assigment

    person2.setName("Matei");
    person2.setAddress("Deva");
    cout << "person 1: " << person1.getName() << " " << person1.getAddress() << " " << person1.getCNP() << " " << person1.getAge()<<"\n";
    cout << "person 2: " << person2.getName() << " " << person2.getAddress() << " " << person2.getCNP() << " " << person2.getAge()<<"\n";

    Student student = Student(person2.getName(), person2.getAddress(), person2.getCNP(), person2.getAge(), "UPT"); // init

    PersonNamespace::Person person2Move(std::move(person2));

    cout << "Person2's (that has been moved) name is " << person2Move.getName() << " and he/she is " << person2.getAge() << " years old.\n";
    

    return 0;
}