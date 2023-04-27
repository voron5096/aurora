#ifndef __CL_APP_H__
#define __CL_APP_H__
#include "cl_base.h"

class cl_application: public cl_base {
    public:
        cl_application(cl_base* head_object); // конструктор (параметр указатель на головной объект)
        void build_tree_objects(); // метод создания дерева объектов (класса cl_1)
        int exec_app(); // метод запуска приложения (собираем все действия, которые нужно сделать с иерархией)
};

#endif
