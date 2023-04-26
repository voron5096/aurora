#include "cl_base.h"
#include "cl_1.h"

class cl_application:public cl_base {
  public:
    cl_application(cl_base* p_head()); // конструктор (параметр указатель на головной объект)
    void build_tree_objects(); // метод создания дерева объектов (класса cl_1)
    int exec_app(); // метод запуска приложения (собираем все действия, которые нужно сделать с иерархией)
};