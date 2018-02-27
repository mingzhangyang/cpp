#include <iostream>
#include <typeinfo>
using namespace std;

class Complex {
  public:
  double real, image;
  Complex(double r, double i = 0);
  Complex();
  Complex(const Complex & c);
  Complex(const Complex & c1, const Complex & c2);
  ~Complex();
};

Complex::Complex(double r, double i) {
  real = r;
  image = i;
  cout << "constructor I invoked" << endl;
}
Complex::Complex() {
  real = 0; image = 0;
  cout << "constructor II invokded" << endl;
}
Complex::Complex(const Complex & c) {
  real = c.real;
  image = c.image;
  cout << "copy constructor invoked" << endl;
}
Complex::Complex(const Complex & c1, const Complex & c2) {
  real = c1.real + c2.real;
  image = c1.image + c2.image;
  cout << "constructor III invoked" << endl;
}
Complex::~Complex() {
  cout << "deconstructor invokded" << endl;
}

int main() {
  // Complex c;
  // Complex c(1, 2);
  Complex c = 1;
  // cout << c << endl;
  // cout << typeid(c).name() << endl;
  // cout << typeid(c1).name() << endl;
}