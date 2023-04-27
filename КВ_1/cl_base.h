// База для всех объектов
#ifndef __CL_BASE_H__
#define __CL_BASE_H__
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class cl_base {
public:
  // Поля:
	string s_name; // строковое поле для имени каждого объекта
	cl_base* p_head_object; // указатель головного объекта (главного / родительского)
	vector <cl_base*> sub_objects; // класс-динамичесский массив для подчинённых объектов
	// Методы:
	cl_base(cl_base* head_object, string s_name = "Base object"); // 2 параметр задаёт имя по умолчанию
	~cl_base(); // для удаления всех подчинённых объектов
	bool set_name(string new_name); // редактирование нового значение поля
	string get_name(); // получение имени
	cl_base* get_head_object(); // получение имени поля p_head_object
	cl_base* get_sub_object(string s_name); // поиск подчинённого объекта, аргументом выступает именя которое мы ищем
	void print_tree(); // вывод метода иерархии объекта
};

#endif
