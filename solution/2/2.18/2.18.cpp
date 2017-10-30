#include <iostream>
int main()
{
  int i = 10;
  int* ri = &i;
  *ri = 11;
  if(ri)
  std::cout << i << " " << *ri << std::endl;
  return 0;
}
