using namespace std;
#include<iostream>
#include<conio.h>

class Calc
{
    private :
            int N1, N2;                                       /// Declaration of private Characteristics

    public :
            int Sum, Sub;                                     /// Declaration of public Characteristics

            Calc();                                           /// Declaration of Default Constructor

            Calc(int No1, int No2);                           /// Declaration of Parameterized Constructor

            Calc(Calc &Ref);                                  /// Declaration of Copy Constructor

            ~Calc();                                          /// Declaration of Destructor

            void Set_Values();                                /// Declaration of Member Function which Sets our Characteristics

            void Addition();                                  /// Declaration of Member Function which Sets Sum of Characteristics

            void Subtraction();                               /// Declaration of Member Function which Sets Subtraction of Characteristics
};

int main()
{
        Calc Obj1;                                          /// Object Created with Default Constructor

        Calc Obj2(51, 21);                                  /// Object Created with Parameterized Constructor

        Calc Obj3(Obj2);                                    /// Object Created With Copy Constructor

        Obj1.Set_Values();

        Obj1.Addition();
        Obj1.Subtraction();

        Obj2.Addition();
        Obj2.Subtraction();

        cout << "\n Addition for Obj2    => " << Obj2.Sum << endl;
        cout << "\n Subtraction for Obj2 => " << Obj2.Sub << endl;

        cout << "\n Addition for Obj1    => " << Obj1.Sum << endl;
        cout << "\n Subtraction for Obj1 => " << Obj1.Sub << endl;

        cout << "\n Addition for Obj3    => " << Obj3.Sum << endl;
        cout << "\n Subtraction for Obj3 => " << Obj3.Sub << endl;

        Obj3.Set_Values();

        cout << "\n Addition for Obj3    => " << Obj3.Sum << endl;
        cout << "\n Subtraction for Obj3 => " << Obj3.Sub << endl;

        getch();

        Obj3.Addition();
        Obj3.Subtraction();

        cout << "\n Addition for Obj3    => " << Obj3.Sum << endl;
        cout << "\n Subtraction for Obj3 => " << Obj3.Sub << endl;

        cout << "\n Back in Main() \n Thanks FRIENDS !!!" << endl;

        getch();
        return 0;
}

Calc :: Calc()                                           /// Default Constructor Definition
{
    N1 = N2 = Sum = Sub = 0;

    cout << "\n Inside Default Constructor!!!" << endl;
}

Calc :: Calc(int No1, int No2)                          /// Parameterized Constructor Definition
{
    N1 = No1;
    N2 = No2;
    Sum = Sub = 0;

    cout << "\n Inside Parameterized Constructor!!!" << endl;
}

Calc :: Calc(Calc &Ref)                                  /// Copy Constructor Definition
{
    this->N1  = Ref.N1;
    this->N2  = Ref.N2;

    this->Sum = 0;
    this->Sub = 0;

    cout << "\n Inside Copy Constructor!!!" << endl;
}

Calc :: ~Calc()                                          /// Destructor Definition
{
    cout << " \n Inside Destructor " << Sub << endl;
}

/// Member Functions Definition

void Calc :: Set_Values()
{
    cout << "\n Enter 2 Numbers = ";
    cin >> N1 >> N2;
}

void Calc :: Addition()
{
    Sum = N1 + N2;
}

void Calc :: Subtraction()
{
    Sub = N1 - N2;
}
