#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Base {
    string obj_name="";
    Base* head_obj;
    enum class Status { error = -1, buid, ready };
    Status state;
    vector<Base*> sub_objs;
public:
    Base(Base* head_obj, string obj_name = "Object_root");
    void set_obj_name(string obj_name);
    string get_obj_name();
    void set_state(int state);
    int get_state();
    void set_head_obj(Base* head_obj);
    Base* get_head_obj();
    Base* get_obj_by_name(string obj_name);
  //  unsigned int sub_objs_count();
    void print_tree();
    ~Base();
};
Base::Base(Base* head_obj, string obj_name)
    :head_obj(head_obj), obj_name(obj_name), state(Status::buid)
{
    if (head_obj) head_obj->sub_objs.push_back(this);
}
void Base::set_obj_name(string obj_name) {
    this->obj_name =obj_name;
}
string Base::get_obj_name() {
    return obj_name;
}
void Base::set_state(int state) {
    switch (state) {
    case -1:
        this->state = Status::error;
        break;
    case 0:
        this->state = Status::buid;
        break;
    case 1:
        this->state = Status::ready;
        break;
    default:
        break;
    }
}
int Base::get_state() {
    switch (state) {
    case Status::error:
        return -1;
    case Status::buid:
        return 0;
    case Status::ready:
        return 1;
    default:
        break;
    }
}
void Base::set_head_obj(Base* head_obj) {
    this->head_obj = head_obj;
}
Base* Base::get_head_obj() {
    return head_obj;
}
Base* Base::get_obj_by_name(string obj_name) {
    if (this->obj_name == obj_name) return this;
    Base* val=nullptr;
    if (!sub_objs.empty()) {
        for (int i = 0; i < sub_objs.size(); i++) {
            if (sub_objs[i]->obj_name == obj_name) val = sub_objs[i];
        }
        if (val == nullptr) {
            for (int i = 0; i < sub_objs.size(); i++) {
                val = sub_objs[i]->get_obj_by_name(obj_name);
            }
        }
    }
    if (val == nullptr) set_state(-1);
    return val;
}
/*unsigned int sub_objs_count();
*/
void Base::print_tree() {
    if (!head_obj) cout << obj_name;
    if (sub_objs.size() > 0) {
        cout << '\n' << obj_name;
        for (int i = 0; i < sub_objs.size(); i++)
            cout << ' ' << sub_objs[i]->get_obj_name();
        for (int i = 0; i < sub_objs.size(); i++) sub_objs[i]->print_tree();
    }
 
}
Base::~Base() {
    delete head_obj;
    sub_objs.clear();
}
class App:public Base {
public:
    App(Base* head=nullptr);
    void build_tree_objs();
    int exec_app();
};
App::App(Base* head) :Base(head) {}
void App::build_tree_objs() {
    string obj_name1,obj_name2;
    cin >> obj_name1;
    set_obj_name(obj_name1);
    while (true) {
        cin >> obj_name1 >> obj_name2;
        if (obj_name1 == obj_name2) return;
        Base* sub = new Base(get_obj_by_name(obj_name1), obj_name2);
        sub->set_state(1);
    }
}
int App::exec_app() {
    print_tree();
    return 0;
}
int main()
{
    App ob_cl_application(nullptr);
    ob_cl_application.build_tree_objs();
    return ob_cl_application.exec_app();
}