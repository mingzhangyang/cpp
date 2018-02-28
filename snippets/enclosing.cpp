#include <iostream>
#include <string>
#include <sstream>

namespace patch {
    template < typename T > std::string to_string(const T & n)
    {
        std::ostringstream stm ;
        stm << n ;
        return stm.str() ;
    }
}

using namespace std;

class Tyre {
  int n;
  int size;
  public:
  Tyre(int a, int b) : n(a), size(b) {
    cout << "Tyre constructor invoked" << endl;
  }
  ~Tyre() {
    cout << "Tyre deconstructor invoked" << endl;
  }
  string getInfo() {
    return "" + patch::to_string(n) + ", " + patch::to_string(size);
  }
};

class Engine {
  int n;
  public:
  Engine(int a) : n(a) {
    cout << "Engine constructor invoked" << endl;
  }
  ~Engine() {
    cout << "Engine desconstructor invokded" << endl;
  }
  string getInfo() {
    return patch::to_string(n);
  }
};

class Car {
  int price;
  Tyre tyre;
  Engine engine;
  public:
  Car(int p, int a, int b, int c) : price(p), tyre(a, b), engine(c) {
    cout << "Car constructor invoked" << endl;
  }
  ~Car() {
    cout << "Car destructor invoked" << endl;
  }
  void printInfo() {
    cout << "Price: " << price << endl;
    cout << "Tyre: " << tyre.getInfo() << endl;
    cout << "Engine: " << engine.getInfo() << endl;
  }
};

int main() {
  Car c(1, 2, 3, 4);
  c.printInfo();
}