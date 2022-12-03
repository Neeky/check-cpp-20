#include "cpps/person.hpp"
using namespace std;

int main(int argc, char *argv[])
{
    Person tom = Person("tom", 16);
    Person jerry = Person("jerry0", 18);

    bool tom_less_then_jerry = tom < jerry;

    cout << "tom less then jerry  = " << tom_less_then_jerry << " ." << endl;
    return 0;
}