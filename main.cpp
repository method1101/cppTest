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

  if ( age >= 21 ) {
    std::cout << fName << " " << lName << " was granted access to the store" << std::endl;
  } else {
    std::cout << fName << " " << lName << " was not granted access to the store" << std::endl;
  }


  return 0;
}