#include <iostream>

int main() {
  std::cout << "Enter your first name: ";
  std::string fName = "";
  std::cin >> fName;

  std::string greeting = "";
  // Adding strings as the way they are not considered to be char *
  greeting = std::string ("* ") + ("Welcome, ") + fName + " *";

  // Creating a simple border
  const std::string border (greeting.size(), '*');

  // Printing the final welcome message
  std::cout << border << std::endl;
  std::cout << greeting << std::endl;
  std::cout << border << std::endl;


  return 0;
}