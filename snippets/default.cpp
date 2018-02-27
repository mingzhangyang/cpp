#include <iostream>
using namespace std;

void test(int i = 0);

int main() {
  test(5);
  test();
}

void test(int i) {
  cout << "i is " << i << endl;
}