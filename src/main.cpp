#include "Person.hpp"
#include "Student.hpp"
#include <string>

#include <iostream>

int main(){
    Person person1 = Person("Andrei", "Timisoara", "123123", 24); // init
    Person person2 = person1; // copy
    Person person3 = person1; // copy
    person3 = person2; // assigment

    person2.setName("Matei");
    person2.setAddress("Deva");
    cout << "person 1: " << person1.getName() << " " << person1.getAddress() << " " << person1.getCNP() << " " << person1.getAge()<<"\n";
    cout << "person 2: " << person2.getName() << " " << person2.getAddress() << " " << person2.getCNP() << " " << person2.getAge()<<"\n";

    Student student = Student(person2.getName(), person2.getAddress(), person2.getCNP(), person2.getAge(), "UPT"); // init

    Person person2Move(std::move(person2));

    cout << "Person2's (that has been moved) name is " << person2Move.getName() << " and he/she is " << person2.getAge() << " years old.\n";
    

    return 0;
}