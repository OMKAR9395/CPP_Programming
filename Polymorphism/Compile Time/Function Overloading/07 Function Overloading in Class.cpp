#include<iostream>
#include<conio.h>
using namespace std;

class Math
{

public:
    void add(int a, int b)
    {
        cout << "Sum (int): " << a + b << endl;
    }
    void add(double a, double b)
    {
        cout << "Sum (double): " << a + b << endl;
    }
    void add(int a, int b, int c)
    {
        cout << "Sum (3 int): " << a + b + c << endl;
    }
    Math()
    {
        cout<< "Constructor of Math Class"<<endl;
    }
    ~Math()
    {
        cout<<"Destructor of Math Class"<<endl;
    }
};

int main()
{
    Math obj;
    obj.add(5, 10);
    obj.add(2.5, 3.5);
    obj.add(1, 2, 3);

    getch();
    return 0;
}

