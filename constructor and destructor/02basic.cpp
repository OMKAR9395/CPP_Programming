using namespace std;
#include<iostream>
#include<conio.h>
#include<string.h>

class Stud
{
    private :
            int RNo, S1, S2, S3;

            void Calculate_Result();
    public :
            int Tot;
            float Per;
            char Name[40];

            Stud();
            Stud(int, char[], int, int, int);
            ~Stud();

            void Accept_Student_Details();
            void Display_Student_Details();
};

int main()
{
        Stud Std1;

        Std1.Accept_Student_Details();

        getch();

        Stud Std2(15, "Harry", 75, 84, 87);

        getch();

        Std1.Display_Student_Details();

        getch();

        Std2.Display_Student_Details();

        getch();
        return 0;
}

/// Default Constructor Definition
Stud :: Stud()
{
    RNo = 0; S1 = 0; S2 = 0; S3 = 0;
    strcpy(Name, "");
    Tot = 0; Per = 0.0;

    cout << "Inside Stud - Default Constructor";
}

/// Parameterized Constructor Definition
Stud :: Stud(int RNum, char Nm[], int M1, int M2, int M3)
{
    RNo = RNum; S1 = M1; S2 = M2; S3 = M3;
    strcpy(Name ,Nm);

    Calculate_Result();

    cout << "\n Inside Stud - Parameterized Constructor. \n";
}

/// Destructor Definition
Stud :: ~Stud()
{
    cout << "\n Inside Stud - Destructor. " << Tot;
}

/// public Member Functions Definitions
void Stud :: Accept_Student_Details()
{
    cout << "\n Enter Student Details => \n";

    cout << "\n Enter Roll No. : ";
    cin >> RNo;

    cout << "\n Enter Name : ";
    cin >> Name;

    cout << "\n Enter Subject 1 Marks : ";
    cin >> S1;
    cout << "\n Enter Subject 2 Marks : ";
    cin >> S2;
    cout << "\n Enter Subject 3 Marks : ";
    cin >> S3;

    Calculate_Result();
}

void Stud :: Display_Student_Details()
{
    cout << "\n Student Details are => \n";

    cout << "\n Roll No.    : " << RNo;
    cout << "\n Name        : " << Name;
    cout << "\n Marks Sub1  : " << S1;
    cout << "\n Marks Sub2  : " << S2;
    cout << "\n Marks Sub3  : " << S3;

    cout << "\n Total Marks : " << Tot;
}

/// Private Member Function Definition
void Stud :: Calculate_Result()
{
    Tot = S1 + S2 + S3;
    Per = ( (float)Tot ) / 3;

    cout << "\n Inside Calc-Res Function. \n";
}
