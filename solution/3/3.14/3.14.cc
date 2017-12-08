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
  vector<int> vi;
  int i;
  while(cin >> i) {
    vi.push_back(i);
  }
  for (auto i : vi) {
    cout << i << endl;
  }
  return 0;
}