// Описать класс cl_parent объекта, в котором следующий состав элементов:
#ifndef CL_PARENT_H
#define CL_PARENT_H

class cl_parent {
	public:
		int publicProp; // одно свойство целого типа
		cl_parent(int iprivate, int ipublic) { // параметризированный конструктор, с двумя целочисленными параметрами, который устанавливает значения свойств в закрытом и открытом разделе. Значение закрытого свойства меняется посредством вызова метода из закрытого раздела
			this -> publicProp = ipublic;
			changePrivate(iprivate);
		};
		void change(int iprivate, int ipublic) { // метод с двумя целочисленными параметрами, который устанавливает значения свойств в закрытом и открытом разделе. Значение закрытого свойства меняется посредством вызова метода из закрытого раздела
			this -> publicProp = ipublic;
			changePrivate(iprivate);
		};
		void print() { // метод, который выводит на экран значение обоих свойств. Сперва значение закрытого свойства, потом значение открытого свойства
			cout << privatProp << " " << publicProp;
		};

	private:
		int privatProp; // одно свойство целого типа
		void changePrivate(int iprivate) { // метод, с одним целочисленным параметром, который меняет значение свойства в закрытом разделе на удвоенное значение параметра
			this -> privatProp = iprivate * 2;
		};
};

#endif

// Назовем объект данного класса родительским. Соответственно его класс родительским классом