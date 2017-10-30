#include <iostream>

struct Light_novel {
  std::string bookname;
  std::string series;
  std::string author;
  std::string ISBN;
  int count;
  double price;
};

int main()
{
  Light_novel book1, book2;
  std::cin >> book1.ISBN >> book1.count >> book1.price;
  std::cin >> book2.ISBN >> book2.count >> book2.price;
  if (book1.ISBN == book2.ISBN) {
    double revenue = book1.count * book1.price + book2.count * book2.price;
    std::cout << "Revenue: " << revenue;
    return 0;
  } else {
    std:: cout << "something error";
    return -1;
  }
}