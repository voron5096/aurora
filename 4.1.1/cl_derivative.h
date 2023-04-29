// На базе родительского объекта сконструируем производный объект
#ifndef CL_H
#define CL_H
#include "cl_parrent.h"

class cl_derivative: public cl_parent { // Производный объект должен сохранить открытый доступ к открытым элементам родительского класса
  public:
    int publicProp; // одно свойство целого типа, наименование которого совпадает с наименование открытого свойства родительского объекта
    cl_derivative(int iprivate, int ipublic): cl_parent(iprivate, ipublic) { // параметризированный конструктор, с двумя целочисленными параметрами, который устанавливает значения свойств в закрытом и открытом разделе
      this -> privatProp = iprivate;
      this -> publicProp = ipublic;
    };
    void change(int iprivate, int ipublic) { // метод с двумя целочисленными параметрами, который устанавливает значения свойств в закрытом и открытом разделе. Наименование метода совпадает с наименованием аналогичного метода родительского объекта
      this -> privatProp = iprivate;
      this -> publicProp = ipublic;
    };
    void print() { // метод, который выводит на экран значение обоих свойств. Сперва значение закрытого свойства, потом значение открытого свойства. Наименование метода совпадает с наименованием аналогичного метода родительского объекта
      cout << privatProp << "    " << publicProp;
    };

  private:
    int privatProp; // одно свойство целого типа, наименование которого совпадает с наименование закрытого свойства родительского объекта
};

#endif

// Разработать производный класс используя класс cl_parent в качестве родительского.
