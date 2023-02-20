#ifndef CPPS_PERSON__
#define CPPS_PERSON__

#include <iostream>
#include <string>

class Person
{
public:
    Person(std::string name, std::size_t age);
    std::string sayHello() const;
    std::string get_name() const;
    bool operator<(const Person &other);
    bool operator<(double age);
    friend std::ostream& operator<<(std::ostream& stream, Person& person);
    friend bool operator<(double age, const Person &other);


private:
    size_t age;
    std::string name;
};

#endif // CPPS_PERSON__
