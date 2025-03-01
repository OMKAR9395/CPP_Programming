#include<iostream>
#include<conio.h>
using namespace std;
// Base class
class Animal
{
  public:
      Animal()
      {
          cout<< "Inside Of Constructor Animal"<<endl;
      }
    void animalSound()
    {
      cout << "The animal makes a sound \n";
    }
    ~Animal()
      {
          cout<< "Inside Of Destructor Animal"<<endl;
      }
};

// Derived class
class Pig : public Animal
{
    public :
    Pig()
    {

        cout<<"OInside Of Constructor Pig"<<endl;
    }

  public:
    void animalSound()
    {
      cout << "The pig says: wee wee \n";
    }

    ~Pig()
    {

        cout<< "Inside Of Destructor Pig"<<endl;
    }
};

// Derived class
class Dog : public Animal
{
    public :
    Dog()
      {
          cout<< "Inside Of Constructor Dog"<<endl;
      }
  public:
    void animalSound()
    {
      cout << "The dog says: bow wow \n";
    }
    ~Dog()
    {

        cout<< "Inside of Destructor Dog"<<endl;
    }
};

int main()
{

  Animal myAnimal;
  Pig myPig;
  Dog myDog;

  myAnimal.animalSound();
  myPig.animalSound();
  myDog.animalSound();

  getch();
  return 0;
}
