#include <iostream>
using namespace std;

class A {
  private:
  int x;
  protected:
  int y;
  public:
  int z;
  A() {
    x = 1; y = 2; z = 3;
    cout << "A class instance created!" << endl;
  }
  A(int a, int b, int c) : x(a), y(b), z(c) {
    cout << "A class instance created!" << endl;
  }
  void printInfo() {
    cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
  }
  void setX(int a) {
    x = a;
    cout << "x changed to " << a << endl;
  }
  void setY(int a) {
    y = a;
    cout << "y changed to " << a << endl;
  }
  void add(const A & a) {
    x += a.x;
    y += a.y;
    z += a.z;
  }
  int getX() {
    return x;
  }
  int getY () {
    return y;
  }
};

class B : public A {
  private:
  int m;
  protected:
  int n;
  public:
  int p;
  B(int d, int e, int f) {
    // A::y = 500; // actually the A constructor was invoked before this step
    // A::z = 1000; // actually the A constructor was invoked before this step
    m = d;
    n = e;
    p = f;
  }
  B(int a, int b, int c, int d, int e, int f) : A(a, b, c) {
    m = d;
    n = e;
    p = f;
  }
  void printInfo() {
    cout << "Base class: ";
    A::printInfo();
    cout << "Derived class: ";
    cout << "m: " << m << ", n: " << n << ", p: " << p << endl;
  }
  int getX() {
    return A::getX();
  }
  int getY() {
    return A::y; // this is OK
  }
  int getZ() {
    return A::z;
  }
};

int main() {
  // A a(1, 2, 3);
  // a.printInfo();
  // A b(4, 5, 6);
  // a.add(b);
  // a.printInfo();
  // cout << a.y << endl; // error: y is protected, can't be accessed
  // a.printInfo();
  // a.setX(10);
  // a.printInfo();
  // a.setY(20);
  // a.z = 30;
  // a.printInfo();
  // B b(4, 5, 6);
  // b.printInfo();
  // cout << b.getX() << endl;
  // cout << b.getY() << endl;
  // cout << b.getZ() << endl;
  // B b1(4, 5, 6);
  // b1.printInfo();
  // B b(10, 20, 30, 4, 5, 6);
  // b.printInfo();
  A a;
  a.printInfo();
  B b(10, 20, 30, 4, 5, 6);
  cout << b.z << endl;
  b.printInfo();
  a = b;
  a.printInfo();
}