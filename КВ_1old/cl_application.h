#ifndef CL_APPLICATION_H
#define CL_APPLICATION_H
#include "cl_base.h"
#include <string>
using namespace std;

class cl_application:public cl_base {
public:
  cl_application(cl_base* parent);
  void bild_tree_objects();
  int exec_app();
};

#endif