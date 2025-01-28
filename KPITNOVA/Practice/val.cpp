#include <iostream>

int main() {
  int *parr, len = 10;
  parr = new int[len];
  for (int i = 0; i < len; i++)
    parr[i] = std::rand() % 100;
  for (int i = 0; i < len; i++)
    std::cout << parr[i] << "\n";
   int *k;
  delete[] parr;
  return 0;
}