#include<conio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

class Product
{
public:
    Product();
    Product(int);
    Product(&CProd);

    void Accept_Product_Details();
    void Display_Product_Details();

    ~Product();
private:
    char Name[40];
    int Product_Id;
    float P_Price;
    float S_Price;
    int C_Stock;
    static int P_Cnt;
};
int main()
{
    Product Prod;
    Prod.Accept_Product_Details();
    Prod.Display_Product_Details();

    getch();
    return 0;
}
void Product :: Accept_Product_Details()
{
    cout<< "Enter Product Id :"<< endl;
    cin>> Product_Id;

    cout<< "Enter Product Name :"<< endl;
    cin>>Name;

    cout<<"";
}
