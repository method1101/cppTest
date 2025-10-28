#include <iostream>

int main() {
  std::cout << "Enter your first name: ";
  std::string fName = "";
  std::cin >> fName;

  std::cout << "Enter your last name: ";
  std::string lName = "";
  std::cin >> lName;

  std::cout << "Enter your age: ";
  int age = 0;
  std::cin >> age;

  std::string greeting = "";
  greeting = "Drear " + fName + " " + lName + ", " + "you are " + std::to_string(age) + " years old ;).";
  std::cout << greeting << std::endl;

  return 0;
}