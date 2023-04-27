#ifndef __CL_1_H__
#define __CL_1_H__
#include "cl_base.h"

/* У даннного класса (как и у базового класса) 1 метод - конструктор, с 2 параметрами:
1. Указатель на главный объект
2. Имя
*/

class cl_1: public cl_base { // Класс 1 наследуемый от базового класса
    public:
        cl_1 (cl_base* head_object, string s_name);
};

#endif
