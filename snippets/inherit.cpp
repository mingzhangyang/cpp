#include <iostream>
using namespace std;

class A {
  int x;
  protected:
  int y;
  public:
  int z;
  A() {
    x = 0; y = 0; z = 0;
  }
  A(int a, int b, int c) : x(a), y(b), z(c) {}
};

class B : public A {
  int m;
  protected:
  int n;
  public:
  int p;
  B() {
    m = 0; n = 0; p = 0;
  }
  B(int a, int b, int c) : m(a), n(b), p(c) {}
  B(int a, int b, int c, int d, int e, int f) : A(a, b, c) {
    m = d; n = e; p = f;
  }
};

int main() {
  // B b;
  B b(1, 2, 3, 4, 5, 6);
  cout << b.z << endl; // only z and p can be accessed with dot notation
}