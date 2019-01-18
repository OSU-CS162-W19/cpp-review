#include <iostream>

struct student {
  std::string name;
  int id;
  float gpa;
  // struct course* courses;
};

int main(int argc, char const *argv[]) {
  struct student s;
  s.name = "Luke Skywalker";
  s.id = 933111111;
  s.gpa = 3.9;

  std::cout << s.name <<std::endl;

  struct student* s_dyn = new struct student;
  (*s_dyn).name = "Leia Organa";
  s_dyn->id = 933222222;
  s_dyn->gpa = 4.0;

  std::cout << s_dyn->name <<std::endl;

  struct student* students = new struct student[10];
  students[0].name = "Rey";
  students[0].id = 933333333;
  students[0].gpa = 3.95;

  // struct student** students2d = new struct student*[10];
  // for (int i = 0; i < 10; i++) {
  //   students2d[i] = new struct student[10];
  // }


  delete s_dyn;
  delete[] students;

  return 0;
}
