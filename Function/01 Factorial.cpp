using namespace std;
#include<iostream>
#include<conio.h>
class Fact
{
public :
    int No=1;
    int Factorial(int Num)
    {
        int i = 0;
        for(i=1;i<=Num;i++)
        {
            No = No * i;
        }
        return No;
    }
};
int main()
{
    int No = 0, Ret = 0;
    Fact obj;

    cout<<"Enter A Number : ";
    cin>>No;

    Ret = obj.Factorial(No);

    cout<<"Factorial Of "<<No<<" is "<<Ret<<endl;
    return 0;
}
