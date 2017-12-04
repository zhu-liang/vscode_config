#include <iostream>

using namespace std;

void dummy()
{
  int i = 0;
  int j = 100;
  int k = i + j;
  cout << k << endl;
  std::cout << "dummy" << endl;
}

int main(void)
{
  std::cout << "Hello world from c++" << std::endl;
  std::cout << "Hello world from c++ 1" << std::endl;
  dummy();
}
