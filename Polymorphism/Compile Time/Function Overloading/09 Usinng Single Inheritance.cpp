#include<iostream>
#include<conio.h>
using namespace std;

class Parent
{
public:
    Parent()
    {
        cout<< "We Are Inside of Constructor In Parent Class"<<endl;
    }
    void show(int x)
    {
        cout << "Parent: " << x << endl;
    }
    ~Parent()
    {
        cout<< "We Are Inside Of Destructor Child Class"<<endl;
    }
};

class Child : public Parent
{
public:
    Child()
    {

        cout<< "We Are Inside of Constructor In Child Class"<<endl;
    }
    void show(double x)
    {
        cout << "Child: " << x << endl;
    }
    ~Child()
    {
        cout<< "We Are Inside Of Destructor Child Class"<<endl;
    }
};

int main()
{
    Child obj;

    obj.show(10);
    obj.show(10.5);

    getch();
    return 0;
}

