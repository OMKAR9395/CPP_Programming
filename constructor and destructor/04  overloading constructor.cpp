///overloading constructor 1 no parameter and 1 with parameter
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

class Num
{
    public:
        int x;
        Num()

    {
        x = 0;
        cout << "Default constructor called" << endl;
    }

    Num(int a)

    {
        x = a;
        cout << "Parameterized constructor called with value: " << x << endl;
    }

    ~Num()

    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    cout << "we Are in main " << endl;
    Num obj1;
    cout << " Object one created in main" << endl;
    Num obj2(30);
    cout << "We are last of main " << endl;
    getch();
    return 0;
}

