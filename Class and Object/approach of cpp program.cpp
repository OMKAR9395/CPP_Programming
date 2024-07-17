#include<iostream>
#include<conio.h>
using namespace std;
class Calculator
{
public :
    int N1,N2,Res;
    Calculator()
    {
        N1 = 0;
        N2 = 0;
        Res = 0;
    }
    Calculator(int Num1,int Num2)
    {
        N1 = Num1;
        N2 = Num2;
        Res = 0;
    }
    void Add()
    {
        Res = N1+ N2;
    }
    void Sub()
    {
        Res = N1 - N2;
    }
};
int main()
{
    Calculator Obj1 , Obj2;

    cout << "\n Enter 1st Number : ";
    cin >> Obj1.N1;

    cout << "\n Enter 2nd Number : ";
    cin >> Obj1.N2;

    Obj1.Add();
    cout << "\n Addition of "<< Obj1.N1<< "&" << Obj1.N2 << "is = " << Obj1.Res<<".";

    cout << "\n Enter 1st Number : ";
    cin >> Obj2.N1;

    cout << "\n Enter 2nd Number : ";
    cin >> Obj2.N2;

    Obj2.Sub();
    cout << "\n Subtraction of "<< Obj2.N1<< "&" << Obj2.N2 << "is = " << Obj2.Res<<".";
    getch();
    return 0;

}
