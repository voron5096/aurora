#include "cl_application.h"
int main()
{
 setlocale(LC_ALL, "ru");
 cl_application ob_cl_application(nullptr);
 ob_cl_application.bild_tree_objects();
 return ob_cl_application.exec_app();
}