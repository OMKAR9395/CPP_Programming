///initialization parameterized constructor
#include<stdio.h>
#include<conio.h>
#include <iostream>
using namespace std;

class Num
{
    public:
        int x;
        ///constructor called
        Num(int a) : x(a) ///value initialized a to  x

        {
            cout << "Constructor with initialization list called\t" <<x<< endl;
        }

    ~Num() ///destructor called

    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    cout << " We are in main" << endl;
    Num obj(40);
    cout << "After calling Constructor we are in main" << endl;
    getch();
    return 0;
}
