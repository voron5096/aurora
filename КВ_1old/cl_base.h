#ifndef CL_BASE_H
#define CL_BASE_H

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class cl_base {
  string object_name = "";
  cl_base* parent;
  int index = 0;
  public:
  int iterator;
  static cl_base* root;
  vector <cl_base*> children;
  cl_base();
  cl_base(string object_name, cl_base* parent);
  void set_name(string name);
  void set_parent(cl_base* parent);
  cl_base* get_parent();
  string get_name();
  cl_base* get_object_by_name(string name);
  void print_tree();
  ~cl_base();
};
#endif
