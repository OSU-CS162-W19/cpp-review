#include <iostream>

int main(int argc, char const *argv[]) {

  int n = 16;
  int* n_ptr = &n;

  std::cout << "n: " << n << std::endl;
  std::cout << "n_ptr: " << n_ptr << std::endl;
  std::cout << "&n: " << &n << std::endl;
  std::cout << "*n_ptr: " << *n_ptr << std::endl;

  *n_ptr = 8;

  std::cout << std::endl;
  std::cout << "n: " << n << std::endl;
  std::cout << "n_ptr: " << n_ptr << std::endl;
  std::cout << "&n: " << &n << std::endl;
  std::cout << "*n_ptr: " << *n_ptr << std::endl;

  int* n_dyn = new int;
  *n_dyn = 32;

  std::cout << std::endl;
  std::cout << "n_dyn: " << n_dyn << std::endl;
  std::cout << "&n_dyn: " << &n_dyn << std::endl;
  std::cout << "*n_dyn: " << *n_dyn << std::endl;

  int arr_static[n];

  int* arr_dyn = new int[n];
  for (int i = 0; i < n; i++) {
    arr_dyn[i] = i * i;
  }

  float** matrix = new float*[4];
  for (int i = 0; i < 4; i++) {
    matrix[i] = new float[4];
    for (int j = 0; j < 4; j++) {
      matrix[i][j] = i * j;
    }
  }

  delete n_dyn;
  delete[] arr_dyn;

  for (int i = 0; i < 4; i++) {
    delete[] matrix[i];
  }
  delete[] matrix;

  return 0;
}
