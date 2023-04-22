#ifndef __MYCLASS_H__
#define __MYCLASS_H__

class MyClass {
  public:
    MyClass() { 
      cout << "Default constructor" << endl;
    };
  
    MyClass(int size) {
      arr = new int [size];
      cout << "Constructor set" << endl;
      (*this).size = size;
    };

    MyClass(MyClass & obj) {
      cout << "Copy constructor" << endl;
      size = obj.size;
      arr = new int[size];
      for(int i = 0; i < size; i++)
        arr[i] = obj.arr[i];
    };

    ~MyClass() {
      cout << "Destructor" << endl;
      cout << "Destructor";
      delete arr;
    };

    void input() {
      int n;
      for(int i = 0; i < size; i++) {
        cin >> n;
        arr[i] = n;
      }
    };
  
    void method1() {
      for (int i = 0; i < size; i = i + 2) {
        arr[i] = arr[i] + arr[i+1];
      }
    };
  
    void method2() {
      for (int i = 0; i < size; i = i + 2) {
        arr[i] = arr[i] * arr[i+1];
      }
    };

    void sum() {
      int sum = 0;
      for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
      }
      cout << sum << endl;
    };

    void print() {
      for (int i = 0; i < size - 1; i++) {
        cout << arr[i] << "  ";
      }
      cout << arr[size-1];
      cout << endl;
    };

    void create() { // метод который создает целочисленный массив в закрытой области, согласно ранее заданной размерности
      arr = new int[size];
    };

  private:
    int *arr; // массив целого типа
    int size; // поле его длины
};

#endif