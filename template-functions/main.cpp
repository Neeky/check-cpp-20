#include<iostream>

template<class T>
const T fun(const T& a , const T& b)
{
    return a + b;
}

int main(int argc , char** argv)
{
    using namespace std;

    int a = 100;
    int b = 200;

    cout<<"hello template-functions. "<<endl;
    cout<<"fun(100, 200) = "<< fun(a, b)<<endl;
}