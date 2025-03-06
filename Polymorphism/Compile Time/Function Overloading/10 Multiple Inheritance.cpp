#include<iostream>
#include<conio.h>
using namespace std;

class A
{
public:
    A()
    {
        cout<< "Class A Constructor Invoked"<<endl;
    }
    void show(int x)
    {
        cout << "Class A: " << x << endl;
    }
    ~A()
    {
        cout<< "Class A Destructor Invoked"<< endl;
    }
};

class B
{
public:
    B()
    {
        cout<< "Class B Constructor Invoked"<<endl;
    }
    void show(double x)
    {
        cout << "Class B: " << x << endl;
    }
    ~B()
    {
        cout<< "Class B Destructor Invoked"<< endl;
    }
};

class C : public A, public B
{
public:
    C()
    {
        cout<< "Class C Constructor Invoked"<<endl;
    }
    void show(string x)
    {
        cout << "Class C: " << x << endl;
    }
    ~C()
    {
        cout<< "Class C Destructor Invoked"<< endl;
    }
};

int main() {
    C obj;
    obj.A::show(10);
    obj.B::show(5.5);
    obj.show("Hello");
    getch();
    return 0;
}
