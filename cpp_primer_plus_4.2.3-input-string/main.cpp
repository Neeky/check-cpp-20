#include <iostream>

int main(int argc, char **argv)
{
    using namespace std;

    const int ArSize{20};
    char name[ArSize];
    char dessert[ArSize];

    cout << "enter your name:" << endl;
    cin >> name;

    cout << "enter your favorite dessert:" << endl;
    cin >> dessert;

    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}