#include "/Users/loredanagostian/Desktop/hw2_paoo/src/Person/Person.hpp"
#include "/Users/loredanagostian/Desktop/hw2_paoo/src/Student/Student.hpp"
#include "/Users/loredanagostian/Desktop/hw2_paoo/src/SharedPtr/SharedPtr.hpp"
#include <iostream>
#include <vector>
#include <memory>

using namespace PersonNamespace;
using namespace StudentNamespace;

using namespace std;

int main()
{
    vector<unique_ptr<Person>> personList;

    Shared_ptr<Person> ptr1(new Person("Andrei", "Timisoara", "123123", 24));
    cout << "--- Shared pointers ptr1 ---\n";
    cout << " ptr1's value now: " << ptr1->getAge() << endl;
    cout << ptr1->getAge() << endl;
 
    {
        Shared_ptr<Person> ptr2 = ptr1;
        ptr1->setAge(30);
        cout << "--- Shared pointers ptr1, ptr2 ---\n";
        cout << ptr1->getAge() << endl;
        cout << ptr2->getAge() << endl;
 
        {
            Shared_ptr<Person> ptr3(ptr2);
            ptr2->setAge(12);
            cout << "--- Shared pointers ptr1, ptr2, ptr3 "
                    "---\n";
            cout << ptr1->getAge() << endl;
            cout << ptr2->getAge() << endl;
            cout << ptr3->getAge() << endl;
        }

        cout << "--- Shared pointers ptr1, ptr2 ---\n";
        cout << ptr1->getAge() << endl;
        cout << ptr2->getAge() << endl;
    }
 
    cout << "--- Shared pointers ptr1 ---\n";
    cout << ptr1->getAge() << endl;

    unique_ptr<PersonNamespace::Person> personUnique = std::make_unique<PersonNamespace::Person>("Andrei", "Timisoara", "123123", 24);
    personList.push_back(std::move(personUnique));

    unique_ptr<PersonNamespace::Person> personUnique2 = std::make_unique<PersonNamespace::Person>("Marius", "Sag", "123321", 42);
    personList.push_back(std::move(personUnique2));

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
 
    return 0;
}