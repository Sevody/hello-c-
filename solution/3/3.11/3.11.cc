#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  string s = "Keep out!";
  for (auto &c : s) {
    std::cout << c << '\n';
    c = 'T';
  }
  cout << s << endl;
  return 0;
}