#include <iostream>

struct student {
  std::string name;
  int id;
  float gpa;
};

int main(int argc, char const *argv[]) {
  struct student s;
  s.name = "Luke Skywalker";
  s.id = 933111111;
  s.gpa = 3.9;

  std::cout << s.name <<std::endl;

  struct student* s_dyn = new struct student;
  (*s_dyn).name = "Leia Organa";
  s_dyn->gpa = 4.0;

  delete s_dyn;

  return 0;
}
