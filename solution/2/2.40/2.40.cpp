#include <iostream>
struct Sales_data {
  std::string name;
  std::string ISBN;
  double price;
};
int main()
{
  Sales_data book;
  book.name = "›öŒm¥Ï¥ë¥Ò¤Î‘nôd";
  book.ISBN = "23333333333";
  book.price = 17.7;
  std::cout << book.name << '\t' << book.ISBN << '\t' << book.price << std::endl;
  
}
