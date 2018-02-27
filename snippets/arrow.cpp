#include <iostream>
using namespace std;

class Person {
  private:
  int id;
  // string name;
  public:
  void greet() {
    cout << "How are you! This is " << id << endl;
  }
  Person();
  Person(int n);
  Person(const Person & p);
  ~Person();
  static int count;
  static void add() {
    cout << "one added ..." << endl;
    count++;
  }
};

Person::Person() {
  id = count + 1;
  cout << "Constructor no argument invoked" << endl;
  count++;
}

Person::Person(int n) {
  id = n;
  cout << "Constructor one argument invoked" << endl;
  count++;
}

Person::Person(const Person & p) {
  id = p.id + 1;
  cout << "Copy constructor invoked" << endl;
}

Person::~Person() {
  count--;
  cout << "Deconstructor invoked" << endl;
}

int Person::count = 0;

int main() {
  Person a;
  // Person b = 50;
  a = 42;
  // Person c(b);
  // Person * p = new Person(7);
  a.greet();
  // b.greet();
  // c.greet();
  // p->greet();
  // a.add();
  // b.add();
  // c.add();
  // p->add();
  cout << a.count << endl;
}