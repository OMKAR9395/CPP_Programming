///copy cunstructor
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class Num
{
    public:
        int x;
            Num(int a) : x(a) {}
            Num(const Num &obj)
        {
            x = obj.x;
            cout << "Copy constructor called" << endl;
        }
            ~Num()///destructor
        {
            cout << "Destructor called" << endl;
        }
};

int main()
{
    cout << "We are in Main" << endl;
    Num obj1(20);
    Num obj2 = obj1;
    cout << "we are in end of int main" << endl;
    return 0;
}

