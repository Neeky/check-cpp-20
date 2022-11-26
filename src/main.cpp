#include<iostream>
#include<string>

using namespace std;

int main() {
    string message {"your first c++20 project works. "};
    if (message.starts_with("your")) {
        // string.starts_with 是 c++ 20 才有的新方法
        cout<<message<<endl;
        return 0;
    }
    cout<<"faild. your c++20 env not ready. "<<endl;
    return 1;
}