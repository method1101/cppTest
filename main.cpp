#include <iostream>

int main() {
  std::cout << "Enter your first name: ";
  std::string fName = "";
  std::cin >> fName;

  std::string greeting = "";
  // Adding strings as the way they are not considered to be char *
  greeting = std::string ("* ") + ("Welcome, ") + fName + " *";

  return 0;
}