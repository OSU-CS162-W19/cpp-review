#include <iostream>

#include <algorithm>

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

bool cmp_students_asc_gpa(const struct student& s1, const struct student& s2) {
  return (s1.gpa < s2.gpa);
}

bool cmp_students_desc_gpa(const struct student& s1, const struct student& s2) {
  return (s1.gpa > s2.gpa);
}

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

  /*
   * We'll sort the students here.
   */
  std::sort(students, students + N_STUDENTS, cmp_students_desc_gpa);

  /*
   * Now when we print the students, they're in sorted order.
   */
  std::cout << std::endl << std::endl;
  for (int i = 0; i < N_STUDENTS; i++) {
    std::cout << students[i].name << "\t\t" << students[i].gpa << std::endl;
  }

  delete[] students;

  return 0;
}
