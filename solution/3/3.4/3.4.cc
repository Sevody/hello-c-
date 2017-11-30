#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  string s1, s2, sb;
  cin >> s1 >> s2;
  // sb = s1 > s2 ? s1 : s2;
  sb = s1.size() > s2.size() ? s1 : s2;
  cout << sb << endl;
  return 0;
}