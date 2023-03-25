#include<iostream>

int main(int argc, char** argv)
{
    using namespace std;

    // 单个对象的内存分配
    int * p = nullptr;
    p = new int;
    *p = 8848;
    cout<<"*p = "<<*p<<endl;
    delete p;

    // 数组
    int* ap = new int[5];
    for(int i = 0 ; i < 5; i++)
    {
        ap[i] = i;
    }
    
    for(int i = 0 ; i < 5; i++)
    {
        cout<< "ap[" << i << "] = "<<ap[i]<<endl;
    }
    delete ap;
}