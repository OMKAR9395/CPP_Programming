#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Class A Constructor Invoked" << endl;
    }

    void show(int x) {
        cout << "Class A: " << x << endl;
    }

    ~A() {
        cout << "Class A Destructor Invoked" << endl;
    }
};

class B : public A {
public:
    B() {
        cout << "Class B Constructor Invoked" << endl;
    }

    using A::show;  // Bring A's show() into scope

    void show(double x) {
        cout << "Class B: " << x << endl;
    }

    ~B() {
        cout << "Class B Destructor Invoked" << endl;
    }
};

class C : public B {
public:
    C() {
        cout << "Class C Constructor Invoked" << endl;
    }

    using B::show;  // Bring both A's and B's show() into scope

    void show(string x) {
        cout << "Class C: " << x << endl;
    }

    ~C() {
        cout << "Class C Destructor Invoked" << endl;
    }
};

int main() {
    C obj;
    obj.show(10);     // Calls A::show(int)
    obj.show(5.5);    // Calls B::show(double)
    obj.show("World"); // Calls C::show(string)
    return 0;
}
