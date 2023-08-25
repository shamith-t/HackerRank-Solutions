#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
  private:
      struct student{
        int age,standard;
        string f_name,l_name;
      };
      string student_string;
      student stu;
  public:
    void set_age(int stu_age){
      stu.age=stu_age;
    }
    void set_standard(int stu_standard){
      stu.standard=stu_standard;
    }
    void set_first_name(string first_name){
      stu.f_name=first_name;
    }
    void set_last_name(string last_name){
      stu.l_name=last_name;
    }
    int get_age(){
      return stu.age;
    }
    int get_standard(){
      return stu.standard;
    }
    string get_last_name(){
      return stu.l_name;
    }
    string get_first_name(){
      return stu.f_name;
    }
    string to_string(){
      stringstream s;
      s<<stu.age<<","<<stu.f_name<<","<<stu.l_name<<","<<stu.standard;
      s>>student_string;
      return student_string;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
