#include "ManagerPerson.hpp"
#include "Person.hpp"
#include "Student.hpp"

template <typename T>
void ManagerPerson<T>::displayUniqueDigitsCNP(const T& person) const {
    std::cout << "Unique digits: " << person.getCNP().substring(person.getCNP() - 4) << std::endl;
}

template class ManagerPerson<PersonNamespace::Person>;  
template class ManagerPerson<StudentNamespace::Student>;