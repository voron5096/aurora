#include "cl_1.h"
#include "cl_base.h"

/*
Когда 1 класс наследуется от другого, мы можем через двоеточие вызвать конструктор базового класса, для инициализации закрытых полей
*/

cl_1::cl_1(cl_base* p_head, string s_name):cl_base(p_head, s_name) {
  
}