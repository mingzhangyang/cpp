#include <iostream>
using namespace std;

class A {
  private:
  int x;

  public:
  int y;
  void printInfo();
  // A(int a, int b, int c) : x(a), y(b), z(c) {
  //   cout << "A class instance created" << endl;
  // }
  protected:
  int z;
};

void A::printInfo() {
  cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
}

int main() {
  A a;
  a.printInfo();
}
