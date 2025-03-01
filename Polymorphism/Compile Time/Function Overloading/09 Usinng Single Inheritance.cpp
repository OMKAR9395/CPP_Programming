#include<iostream>
#include<conio.h>
using namespace std;

class Parent
{
public:
    void show(int x)
    {
        cout << "Parent: " << x << endl;
    }
};

class Child : public Parent
{
public:
    void show(double x)
    {
        cout << "Child: " << x << endl;
    }
};

int main()
{
    Child obj;

    obj.show(10);   // Calls Parent::show(int)
    obj.show(10.5); // Calls Child::show(double)

    getch();
    return 0;
}

