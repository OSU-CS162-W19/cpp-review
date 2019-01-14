#include <iostream>

/*
 * In this file, we'll work on sorting an array of these student structures.
 */
struct student {
  std::string name;
  float gpa;
};

/*
 * Below is some testing data (names and GPAs) for 10 students.
 */
#define N_STUDENTS 10

const std::string NAMES[N_STUDENTS] = {
  "Luke Skywalker",
  "Princess Leia",
  "Han Solo",
  "Rey",
  "Poe Dameron",
  "Finn",
  "Jynn Erso",
  "Darth Vader",
  "Kylo Ren",
  "R2-D2"
};

const float GPAS[N_STUDENTS] = {
  3.9,
  4.0,
  2.67,
  3.95,
  3.25,
  3.67,
  3.5,
  2.25,
  1.67,
  4.0
};

int main(int argc, char const *argv[]) {
  /*
   * Here, we're dynamically allocating and initializing an array of students.
   */
  struct student* students = new struct student[N_STUDENTS];
  for (int i = 0; i < N_STUDENTS; i++) {
    students[i].name = NAMES[i];
    students[i].gpa = GPAS[i];
    std::cout << students[i].name << "\t\t" << students[i].gpa << std::endl;
  }

  return 0;
}
