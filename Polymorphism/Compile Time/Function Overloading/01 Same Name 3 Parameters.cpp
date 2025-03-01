#include<iostream>
#include<conio.h>
using namespace std;
class Addition
{
    public:

    Addition()
    {
        cout<<"Inside Of Constructor "<<endl;
    }

    void Add(int x,int y)
    {
        cout<< "Addition of Two Numbers is : "<<x+y<<endl;
    }
    void Add(int x, int y, int z)
    {
        cout << "Addition Of Three Number is :"<<x+y+z<<endl;
    }

    ~Addition()
    {
        cout<< "Inside Of Destructor" <<endl;
    }
};
int main()
{
    int x=0,y=0,z=0;
    Addition Obj;

    cout<< "Enter First Number :"<<endl;
    cin>>x;

    cout<< "Enter Second Number :"<<endl;
    cin>>y;

    cout<< "Enter Third Number :" <<endl;
    cin>>z;

    Obj.Add(x,y);
    Obj.Add(x,y,z);

    cout<< "Thanks!!!"<<endl;
    getch();
    return 0;

}
