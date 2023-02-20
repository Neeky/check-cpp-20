#include <unistd.h>
#include <iostream>



using namespace std;


int hello(int i) 
{
    cout<<"hello world " << i << " ." << endl;
    // sleep(0);
    return i;
}

int main(int argc, char *argv[])
{
    for(int i = {0}; i < 3; i++) 
    {
        hello(i);
    }
    return 0;
}