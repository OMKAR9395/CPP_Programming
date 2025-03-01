#include<iostream>
#include<conio.h>
using namespace std;
class Calc
{
    public:

    Calc()
    {
        cout<<"Inside Of Constructor "<<endl;
    }

    Display(int X,double Y)
    {
     cout<< "Addition Of "<<X<<"And "<<Y<<" Is :"<<X+Y<<endl;
    }
    Display(double X , int Y)
    {
        cout<< "Substraction Of "<<X<<"And "<<Y<<" Is :"<<X-Y<<endl;

    }

    ~Calc()
    {
        cout<< "Inside Of Destructor" <<endl;
    }
};
int main()
{
    int X=200;
    double Y=100.00;

    cout<< "We Are In Main"<<endl;

    Calc Obj;
    Obj.Display(X,Y);
    Obj.Display(Y,X);

    cout<< "Thanks!!!"<<endl;

    getch();
    return 0;

}

