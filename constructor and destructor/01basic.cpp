using namespace std;
#include<iostream>
#include<conio.h>

class Calc
{
    private :
            int N1, N2;

    public :
            int Sum, Sub;

            Calc()
            {
                N1 = N2 = Sum = Sub = 0;

                cout << "\n Inside Default Constructor!!!" << endl;
            }

            Calc(int No1, int No2)
            {
                N1 = No1;
                N2 = No2;
                Sum = Sub = 0;

                cout << "\n Inside Parameterized Constructor!!!" << endl;
            }

            Calc(Calc &Ref)
            {
                this->N1  = Ref.N1;
                this->N2  = Ref.N2;

                this->Sum = 0;
                this->Sub = 0;

                cout << "\n Inside Copy Constructor!!!" << endl;
            }

            ~Calc()
            {
                cout << " \n Inside Destructor " << Sub << endl;
            }

            void Set_Values()
            {
                cout << "\n Enter 2 Numbers = ";
                cin >> N1 >> N2;
            }

            void Addition()
            {
                Sum = N1 + N2;
            }

            void Subtraction()
            {
                Sub = N1 - N2;
            }
};

int main()
{
        Calc Obj1;

        Obj1.Set_Values();

        Obj1.Addition();
        Obj1.Subtraction();

        cout << "\n Addition for Obj1    => " << Obj1.Sum << endl;
        cout << "\n Subtraction for Obj1 => " << Obj1.Sub << endl;

        Calc Obj2(51, 21);
        Obj2.Addition();
        Obj2.Subtraction();

        cout << "\n Addition for Obj2    => " << Obj2.Sum << endl;
        cout << "\n Subtraction for Obj2 => " << Obj2.Sub << endl;

        getch();

        Calc Obj3(Obj2);

        cout << "\n Addition for Obj3    => " << Obj3.Sum << endl;
        cout << "\n Subtraction for Obj3 => " << Obj3.Sub << endl;

        getch();

        Obj3.Set_Values();

        cout << "\n Addition for Obj3    => " << Obj3.Sum << endl;
        cout << "\n Subtraction for Obj3 => " << Obj3.Sub << endl;

        getch();

        Obj3.Addition();
        Obj3.Subtraction();

        cout << "\n Addition for Obj3    => " << Obj3.Sum << endl;
        cout << "\n Subtraction for Obj3 => " << Obj3.Sub << endl;

        cout << "\n Back in Main() \n Thanks Students !!!" << endl;

        getch();
        return 0;
}

