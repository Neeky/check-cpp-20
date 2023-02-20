#include <iostream>
#include <string>
#include "cpps/person.hpp"

Person::Person(std::string name, std::size_t age)
{
    this->name = name;
    this->age = age;
}

/*
 * 实现对 < 运算符的支持
*/
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
    return age < other.age;
}

// 实现类似 tostring 一样的效果
std::ostream& operator<<(std::ostream& stream, Person& person) {
    stream<<person.sayHello();

    return stream;
}

/*
 * 实现 sayHello() 方法
*/
std::string Person::sayHello() const {
    return "hello my name is " + name + " ."; 
}
