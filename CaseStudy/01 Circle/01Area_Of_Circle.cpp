using namespace std;
#include<iostream>
#include<conio.h>

class Circle
{
  public:
      float Radius, Area, Circum;

      Circle();
      Circle(float Radius);
      Circle(const Circle &cRef);

      ~Circle();

      void Calculate_Area();
      void Calculate_Circumference();
      void Display();

  private:
      const float PI ;
};


int main()
{
    Circle Calc(5.5);
    Calc.Calculate_Area();
    Calc.Calculate_Circumference();
    Calc.Display();
    getch();

    return 0;
}

Circle::Circle():PI(3.14)
{
    Radius = Area = Circum = 0.0;
}

Circle::Circle(float Rad):PI(3.14)
{
    Radius = Rad;
    Area = Circum = 0.0;
}

Circle::Circle(const Circle &cRef):PI(3.14)
{
    Radius = cRef.Radius;
    Area = cRef.Area;
    Circum = cRef.Circum;
}

Circle::~Circle()
{
   system("cls");
   cout<<"Thanks For Using This Application"<<endl;
}

void Circle::Calculate_Area()
{
    Area = PI * Radius * Radius;
}

void Circle::Calculate_Circumference()
{
    Circum = 2 * PI * Radius;
}

void Circle::Display()
{
    cout << "Radius of Circle: " << Radius << endl;
    cout << "Area of Circle: " << Area << endl;
    cout << "Circumference of Circle: " << Circum << endl;
}
