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
  vector<string> dataSet{"aa", "bb", "cc", "dd", "ee", "ff"};
  string testString = "dd";
  
  auto end = dataSet.cend();
  auto mid = begin + (end - begin) / 2;

  while (mid != end) {
    if (*mid == testString) {
      cout << "Finded" << endl;
      return 0;
    }
    if (testString < *mid) {
      end = mid;
    } else {
      begin = mid + 1;
    }
    mid = begin + (end - begin) / 2;
  }

  return 0;
}