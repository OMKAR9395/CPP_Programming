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

    Display(int &X)
    {
     cout<< "Single Integer Of X is :"<<X<<endl;
    }
    Display(const int &X)
    {
        //cout<< "Addition Of "<<X<<"And "<<Y<<" Is :"<<X+Y<<endl;
        cout<< "Single Integer Const Of X is :"<<X<<endl;

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

    //
    cout<<"It Works Top To Bottom Approach For Function Parameters";
    Obj.Display(X);
    Obj.Display(50);
    //Obj.Display(Y,X);

    cout<< "Thanks!!!"<<endl;

    getch();
    return 0;

}



