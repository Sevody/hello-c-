#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  string s, re;
  cin >> s;
  for (auto c : s)
    if (!ispunct(c))
      re += c;
  cout << re << endl;
  return 0;
}