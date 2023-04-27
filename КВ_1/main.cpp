#include "cl_application.h"

int main () {
	cl_application ob_cl_application(nullptr); // создание корневого объекта
	ob_cl_application.build_tree_objects(); // конструирование системы, построение дерева объектов
	return ob_cl_application.exec_app(); // запуск системы
}
