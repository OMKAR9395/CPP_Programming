///dynamic memory with pointer
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

class Num
{
    public:
    int *p; ///pointer declare

    Num(int a)

    {
        p = new int;
        *p = a;
        cout << "Dynamic memory allocated in constructor with value: " << *p << endl;
    }
    ~Num()
    {
        delete p;
        cout << "Destructor called and memory deallocated" << endl;
    }
};

int main()
{
    cout << " We are in main" << endl;

    Num obj(50);

    cout << "After calling Constructor we are in main" << endl;

    return 0;
}

