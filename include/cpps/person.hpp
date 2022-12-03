#include <iostream>
#include <string>

class Person
{
public:
    Person(std::string name, std::size_t age);
    bool operator<(const Person &other);
    bool operator<(double age);
    friend bool operator<(double age, const Person &other);
    std::size_t getAge() const;

private:
    size_t age;
    std::string name;
};