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
  vector<int> v1; // 0
  vector<int> v2(10); // 10
  vector<int> v3(10, 42); // 10
  vector<int> v4{10}; // 1
  vector<int> v5{10, 42}; // 2
  vector<string> v6{10}; //10
  vector<string> v7{10, "hi"}; //10

  vector<int> countV(7, 0);

  for (auto i = v1.cbegin(); i != v1.cend(); ++i) countV[0] = countV[0] + 1;
  for (auto i = v2.cbegin(); i != v2.cend(); ++i) countV[1] = countV[1] + 1;
  for (auto i = v3.cbegin(); i != v3.cend(); ++i) countV[2] = countV[2] + 1;
  for (auto i = v4.cbegin(); i != v4.cend(); ++i) countV[3] = countV[3] + 1;
  for (auto i = v5.cbegin(); i != v5.cend(); ++i) countV[4] = countV[4] + 1;
  for (auto i = v6.cbegin(); i != v6.cend(); ++i) countV[5] = countV[5] + 1;
  for (auto i = v7.cbegin(); i != v7.cend(); ++i) countV[6] = countV[6] + 1;

  for (auto i = countV.cbegin(); i != countV.cend(); ++i) cout << *i << endl;
  return 0;
}