#include <iostream>
using namespace std;

void say(int & a) {
  cout << a << endl;
}

void say1(int * a) {
  cout << a << endl;
  cout << *a << endl;
}

int main() {
  int n = 5;
  int & r1 = n;
  int & r2 = r1;
  cout << n << "--" << r1 << "--" << r2 << endl;
  r2 = 10;
  cout << n << "--" << r1 << "--" << r2 << endl;
  say(n);
  say(r1);
  say1(&n);
  // say1(r1);
}