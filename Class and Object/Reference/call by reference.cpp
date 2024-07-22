using namespace std;
#include<iostream>
#include<conio.h>
void Reference (int&);
int main()
{
    int No=20;
    cout<<No<<endl;
    Reference(No);
    cout<<No<<endl;
    getch();
    return 0;
}
void Reference(int &Ref)
{
    cout<<"Inside function .."<< endl;
    Ref++;
}
