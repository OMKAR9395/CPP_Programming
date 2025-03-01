#include<iostream>
using namespace std;
class add
{
public:
    int b=1;
    int display(int No)
    {
        for(int i=1;i<=No;i++)
        {
            b=b*i;
        }
        return b;
    }
};
int main()
{
    add obj;
    int a,ret=0;
    cout << "Enter Your Number :";
    cin>>a;

    ret = obj.display(a);
    cout<<"Factorial is = "<< ret ;
    return 0;
}
