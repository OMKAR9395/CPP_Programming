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

    Display(int X)
    {
     cout<< "Single Integer Of X is :"<<X<<endl;
    }
    Display(int X , int Y)
    {
        cout<< "Addition Of "<<X<<"And "<<Y<<" Is :"<<X+Y<<endl;

    }

    ~Calc()
    {
        cout<< "Inside Of Destructor" <<endl;
    }
};
int main()
{
    int X=200,Y=100;

    cout<< "We Are In Main"<<endl;

    Calc Obj;

    Obj.Display(X);
    //Obj.Display(Y,X);

    cout<< "Thanks!!!"<<endl;

    getch();
    return 0;

}



