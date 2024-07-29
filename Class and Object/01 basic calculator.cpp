#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class Maths
{
    public:
        int No1, No2, Ans;

        void Add();
        void Sub();
};

void Maths :: Add()
{
    Ans = No1 + No2;
}

void Maths :: Sub()
{
    Ans = No1 - No2;
}

int main()
{
    Maths obj1, obj2;

    obj1.No1 = 30;
    obj1.No2 = 20;
    obj2.No1 = 150;
    obj2.No2 = 115;

    obj1.Add();
    cout << "\n Addition is : " << obj1.Ans << endl;

    obj2.Sub();
    cout << "\n Subtraction is : " << obj2.Ans << endl;

    getch();
    return 0;
}
