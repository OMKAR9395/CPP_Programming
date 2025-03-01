using namespace std;
#include<iostream>
#include<conio.h>

class  Constructor_Demo
{
    private :
                int  x,  y;/// Private - Data Members or Characteristics

                void  Sun();///Private - Member Function or Behavior - Declaration

    protected :
                int  a , b; /// Protected - Data Members or Characteristics

                void  Gun();/// Protected - Member Function or Behavior - Declaration

    public :
                int  i , j;/// Public - Data Members or Characteristics

                void  Fun();/// Public - Member Function or Behavior - Declaration

                Constructor_Demo()/// Default Constructor
                {
                            i = j = x = y = 1580;
                            a = b = 2020;

                            cout<< "\n Inside Default Constructor Of Our Class...";

/// Inside Constructor We Can Call Any Member Function Without Access Specifiers Limitations Bcz
///Constructor is Insider Of Class Can And As We Know Insider Can Access Any Characteristics/ Behaviors Of Class
Fun();
Sun();
Gun();

cout<< "\n\n Characteristics Values Inside Constructor =>\n i = " << i <<" j = "<< j <<" x = "<< x <<" y = "<< y <<" a = "<< a << " b = "<< b;
getch();
                }

                ~Constructor_Demo()/// Destructor
                {
                            cout<< "\n Inside Destructor Of Our Class...";
                }
};


///  main() Function Definition

int  main()
{
    Constructor_Demo  Obj1; /// Objects Created Using Default Constructor

    cout<< "\n INSIDE main()!!!!!";

    Obj1.Fun();///  Public Member Function Accessible Outside Class

    ///Obj1.Gun();///  Protected Member Function  CAN'T  BE  Accessible Outside Class

    ///Obj1.Sun(); //  Private Member Function  CAN'T  BE  Accessible Outside Class

    cout << "\n\n Values Of Public Characteristics Of Obj1 => \n I = " << Obj1.i << " J = " << Obj1.j ;///  Public Characteristics - Accessible Outside Class

    ///cout << "\n\n Values Of Private Characteristics Of Obj1 => \n X = " << Obj1.x << " Y = " << Obj1.y ;///  Private Characteristics -  CAN'T  BE Accessible Outside Class

    ///cout << "\n\n Values Of Protected Characteristics Of Obj1 => \n A = " << Obj1.a << " B = " << Obj1.b ; /// Protected Characteristics -  CAN'T  BE Accessible Outside Class

    getch();
    return 0;}

/// Member Function Definitions Outside Class

void  Constructor_Demo :: Sun()
{
                cout << "\n Inside Private Sun() function of our Class...";
}

void Constructor_Demo :: Gun()
{
                cout << "\n Inside PROTECTED Gun() function of our Class...";
}

void  Constructor_Demo :: Fun()
{
                cout << "\n Inside PUBLIC fun() function of our Class...";
}
