#include <iostream>
using namespace std;

class Test {
  public:
  ~Test() {
    cout << "destructior invoked" << endl;
  }
};

int main() {
  Test a[3];
  Test * b = new Test;
  Test c;
  // delete b;
  cout << "Leaving main function ..." << endl;
  return 0;
}