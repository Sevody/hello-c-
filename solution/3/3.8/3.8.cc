#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  string s = "abcdefg";
  // for (unsigned i = 0; i < s.size(); i++)
    // s[i] = 'X';
  unsigned i = 0;
  while (i < s.size()) {
    s[i] = 'X';
    i++;
  }
  cout << s << endl;
  // string s2;
  // char *p = &s2[0];
  // for (int i = 0; i < 100; i++) {
  //   cout << unsigned(*p) << "\t" << *p << endl;
  //   p += 16;
  // }
  return 0;
}