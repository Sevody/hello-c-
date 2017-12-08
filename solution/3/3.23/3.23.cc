#include <iostream>
#include <string>

#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
  vector<int> vi{1,2,3,4,5,6,7,8,9,10};
  auto it = vi.begin();
  while (it != vi.end()) {
    *it = *it * 2;
    ++it;
  }
  for (auto i = vi.cbegin(); i != vi.cend(); ++i) cout << *i << endl;
  return 0;
}