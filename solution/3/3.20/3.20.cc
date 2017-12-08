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
  for (unsigned i = 0; i < vi.size() - 1; i++) {
    cout << vi[i] + vi[i+1] << endl;
  }
  return 0;
}