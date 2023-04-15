#include <iostream>
using namespace std;
#include "main.h"

void func(MyClass obj) {
  obj.method2();
  obj.print();
  obj.sum();
  obj.method1();
  obj.print(); // вывод содержимого массива второго объекта
  obj.sum(); // вывод суммы элементов массива второго объекта
}

int main() {
  int size;
  cin >> size; // ввод размерности массива
  
  if ((size % 2 != 0) or (size <= 2)) { // если размерность массива некорректная, вывод сообщения и завершить работу алгоритма
    cout << size << "?";
    return (0);
  }
  
  cout << size << endl; // вывод значения размерности массива
  MyClass *obj1 = new MyClass; // создание первого объекта
  MyClass obj(size); // присвоение первому объекту результата работы функции func с аргументом, содержащим значение размерности массива
  delete (obj1);
  cout << endl;
  obj.input(); // для первого объекта вызов метода создания массива??
  func(obj);
  cout << endl;
  return(0);
}                