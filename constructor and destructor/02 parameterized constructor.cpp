///Parameterized constructor
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class College
{
public:
      int x;
    College(int a)
     {
        x = a;
        cout << "Parameterized constructor called with value: " << x << endl;
     }
    ~College()
    {
        cout << "Destructor called program has exucates" << endl;
    }
};

int main()
{
    cout << "We are in main"<< endl;
    College obj=10;
    cout << "we are in main after  declare object" << endl;
    cout << "press any key to call destructor"<< endl;

    getch();
    return 0;
}

