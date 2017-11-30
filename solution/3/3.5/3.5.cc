#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  string s, text, utext;
  while(getline(cin, s)) {
    text += s;
  }
  for (auto c : text) {
    if (isprint(c)) {
      if (isalpha(c)) {
        c = toupper(c);
      }
      utext += c;
    }
  }
  cout << utext << endl;
  return 0;
}