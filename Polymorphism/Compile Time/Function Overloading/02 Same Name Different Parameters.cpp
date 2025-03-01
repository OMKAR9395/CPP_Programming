#include<iostream>
using namespace std;
class Calc
{
    public:

        Calc()
        {
            cout<<"Inside Of Constructor "<<endl;
        }

    void Display(int a)
    {
        cout<<"Integer Number Is :"<<a<<endl;
    }
    void Display(double a)
    {
        cout << "Double Number Is :" <<a<< endl;
    }
    void Display(char a)
    {
        cout << "Character is :"<<a<<endl;
    }
    ~Calc()
    {
        cout<< "Inside Of Destructor" <<endl;
    }
};
int main()
{
    int X=200;
    double Y= 345.56;
    char Z='Z';

    cout<< "We Are In Main"<<endl;

    Calc Obj;
    Obj.Display(X);
    Obj.Display(Y);
    Obj.Display(Z);

    cout<< "Thanks!!!"<<endl;

    return 0;

}
