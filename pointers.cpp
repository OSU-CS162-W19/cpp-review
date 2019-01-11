#include <iostream>

int main(int argc, char const *argv[]) {

  int n = 16;
  int* n_ptr = &n;

  std::cout << "n: " << n << std::endl;
  std::cout << "n_ptr: " << n_ptr << std::endl;
  std::cout << "&n: " << &n << std::endl;
  std::cout << "*n_ptr: " << *n_ptr << std::endl;

  *n_ptr = 8;
  
  std::cout << "n: " << n << std::endl;
  std::cout << "n_ptr: " << n_ptr << std::endl;
  std::cout << "&n: " << &n << std::endl;
  std::cout << "*n_ptr: " << *n_ptr << std::endl;

  return 0;
}
