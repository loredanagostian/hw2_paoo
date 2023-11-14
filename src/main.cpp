#include "/Users/loredanagostian/Desktop/hw2_paoo/src/Person/Person.hpp"
#include "/Users/loredanagostian/Desktop/hw2_paoo/src/Student/Student.hpp"
#include "/Users/loredanagostian/Desktop/hw2_paoo/src/ManagerPerson/ManagerPerson.hpp"
#include <iostream>
#include <vector>
#include <memory>

using namespace PersonNamespace;
using namespace StudentNamespace;

using namespace std;

int main(){
    vector<unique_ptr<Person>> personList;

    unique_ptr<PersonNamespace::Person> personUnique = std::make_unique<PersonNamespace::Person>("Andrei", "Timisoara", "123123", 24);
    personList.push_back(std::move(personUnique));

    unique_ptr<PersonNamespace::Person> personUnique2 = std::make_unique<PersonNamespace::Person>("Marius", "Sag", "123321", 42);
    personList.push_back(std::move(personUnique2));

    unique_ptr<StudentNamespace::Student> studentUnique = std::make_unique<StudentNamespace::Student>("Ion", "Deva", "000021", 22, "UPT");
    personList.push_back(std::move(studentUnique));

    cout << "Persons List:\n";
    for (const auto& person : personList) {
        cout<<person->getName()<<" "<<person->getAddress()<<" "<<person->getCNP()<<" "<<person->getAge()<<" "<<endl;
    }

    auto sharedStudent = make_shared<Student>("Alex", "Deva", "012012", 30, "UVT");
    Student s1(sharedStudent->getName(), sharedStudent->getAddress(), (sharedStudent->getCNP().substring(sharedStudent->getCNP() - 4)), sharedStudent->getAge(), "AC");

    personList.push_back(std::move(sharedStudent));
    personList.push_back(std::move(s1));



    return 0;
}