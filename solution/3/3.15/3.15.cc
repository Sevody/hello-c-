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
  vector<string> vs;
  string t;
  while(cin >> t) {
    vs.push_back(t);
  }
  for (auto s : vs) {
    cout << s << endl;
  }
  return 0;
}