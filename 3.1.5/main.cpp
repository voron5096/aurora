#include <iostream>
using namespace std;
#include "main.h"

MyClass* func(int size) {
  MyClass *obj = new MyClass(size);
  obj -> create();
  obj -> input();
  obj -> method2();
  return obj;
}

int main() {
  int size;
  cin >> size;
  
  if ((size % 2 != 0) or (size <= 2)) {
    cout << size << "?";
    return 0;
  }
  
  cout << size << endl;
  MyClass *obj1;
  obj1 = func(size);
  obj1 -> method1();
  MyClass *obj2 = new MyClass(*obj1);
  obj2 -> method2();
  obj1 -> print();
  obj1 -> sum();
  obj2 -> print();
  obj2 -> sum();
  obj2 = obj1;
  obj1 -> method2();
  obj2 -> print();
  obj2 -> sum();
  delete obj2;
  return(0);
}