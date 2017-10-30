#include <iostream>
#include "./Sales_data.h"

int main()
{
  Sales_data book;
  book.bookNo = "test";
  std::cout << book.bookNo <<std::endl;
  return 0;
}