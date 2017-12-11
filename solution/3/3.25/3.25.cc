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
  vector<int> levels(11, 0);
  int scord, level;
  vector<int>::iterator curl;
  while(cin >> scord) {
    if (scord <= 100) {
      curl = levels.begin();
      level = scord / 10;
      curl += level;
      *curl += 1;
    }
  }
  for (auto il = levels.cbegin(); il != levels.cend(); ++il) {
    cout << *il << endl;
  }
  return 0;
}