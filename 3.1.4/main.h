// добавляется метод print
#ifndef __MYCLASS_H__
#define __MYCLASS_H__

class MyClass {
public:
		MyClass() { // конструктор по умолчанию, в начале работы выдает сообщение
			cout << "Default constructor" << endl;
		};
	
		MyClass(int size) { // параметризированный конструктор, передается целочисленный параметр
			arr = new int [size]; // метод который создает целочисленный массив в закрытой области, согласно ранее заданной размерности.
			cout << "Constructor set" << endl;
			(*this).size = size; // по значению параметра определяется размерность целочисленного массива из закрытой области
		};
	
		MyClass(MyClass & obj) { // конструктор копии, обеспечивает создание копии объекта в новой области памяти
			cout << "Copy constructor" << endl;
			size = obj.size;
			arr = new int[size];
			for(int i = 0; i < size; i++)
				arr[i] = obj.arr[i];
		};
	
		~MyClass() { // метод деструктор, который в начале работы выдает сообщение
			cout << "Destructor";
			delete arr;
		};
	
		void input() { // метод ввода данных для созданного массива;
			int n;
			for(int i = 0; i < size; i++) {
				cin >> n;
				arr[i] = n;
			}
		};
	
		void method1() { // суммирует значения очередной пары элементов и сумму присваивает первому элементу пары
			for (int i = 0; i < size; i = i + 2) {
				arr[i] = arr[i] + arr[i+1];
			}
		};
	
		void method2() { // умножает значения очередной пары элементов и результат присваивает первому элементу пары
			for (int i = 0; i < size; i = i + 2) {
				arr[i] = arr[i] * arr[i+1];
			}
		};
	
		void sum() { // метод который, суммирует значения элементов массива и возвращает это значение;
			int sum = 0;
			for (int i = 0; i < size; i++) {
				sum = sum + arr[i];
			}
			cout << sum << endl;
		};
	
		void print() { // метод последовательного вывода содержимого элементов массива, которые разделены тремя пробелами
			for (int i = 0; i < size - 1; i++) {
				cout << arr[i] << "   ";
			}
			cout << arr[size-1];
			cout << endl;
		};
 
	private:
		int *arr; // массив целого типа
		int size; // поле его длины
};

#endif