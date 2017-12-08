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
  string ts;
  while(cin >> ts) {
    vs.push_back(ts);
  }
  for (auto &s : vs) {
    for (auto &c : s) {
      c = toupper(c);
    }
  }
  for (auto s : vs) {
    cout << s << endl;
  }
  return 0;
}