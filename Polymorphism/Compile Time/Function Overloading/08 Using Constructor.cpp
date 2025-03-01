#include<iostream>
#include<conio.h>
using namespace std;

class Box
{
public:
    int length, width;

    Box()
    {
        length = width = 0;
    }
    Box(int l, int w)
    {
        length = l;
        width = w;
    }
    void display()
    {
        cout << "Box Dimensions: " << length << " x " << width << endl;
    }
};

int main()
{
    Box b1;
    Box b2(10, 5);

    b1.display();
    b2.display();

    b1.display();
    b2.display();

    getch();
    return 0;
}


