#include <iostream>
#include <string>
#include "cpps/person.hpp"

Person::Person(std::string name, std::size_t age)
{
    this->name = name;
    this->age = age;
}

std::size_t Person::getAge() const
{
    return age;
};

bool Person::operator<(const Person &other)
{
    return age < other.age;
}

bool Person::operator<(double age)
{
    return this->age < age;
}

bool operator<(double age, const Person &other)
{
    return age < other.getAge();
}