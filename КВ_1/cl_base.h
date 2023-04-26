// База для всех объектов
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#ifndef __H__
#define __H__

class cl_base {
  // Поля:
  string s_name; // строковое поле для имени каждого объекта
  cl_base* p_head_object; // указатель головного объекта (главного / родительского)
  vector <cl_base*> p_sub_objects; // класс-динамичесский массив для подчинённых объектов

  // Методы:
  public:
    cl_base(cl_base* p_head, string s_name = "Base Object"); // 2 параметр задаёт имя по умолчанию
    ~cl_base(); // для удаление всех подчинённых объектов
    void set_name(string s_new_name); // редактирование нового значение поля
    string get_name(); // получение имени
    cl_base* get_head(); // получение имени поля p_head_object
    cl_base* get_sub_object(string s_name); // поиск подчинённого объекта, аргументом выступает именя которое мы ищем
    void print_tree(); // вывод метода иерархии объекта
};

#endif