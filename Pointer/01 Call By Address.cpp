#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void Calc(int,int,int,int*,float*);
int main()
{
    int Phy = 0,Chem =0,Math =0,Total=0;
    float Percent = 0.0;

    cout<<"\n Enter Three Subject Marks";

    cout<< "\n Enter Physics Marks :";
    cin>>Phy;

    cout<< "\n Enter Chemistry Marks :";
    cin>>Chem;

    cout<< "\n Enter Mathematics Marks";
    cin>>Math;

    Calc(Phy, Chem, Math, &Total, &Percent);

    cout<<"\n Total Marks Of Student :"<<Total;
    cout<< "\n Percentage Of Student :"<<Percent;

    getch();
    return 0;
}
void Calc(int P,int C, int M,int *T,float *Per)
{
    *T = P + C + M;

    *Per = *T/3;

    return;
}
