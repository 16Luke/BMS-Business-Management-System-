#include <iostream>
#include "roles.h"

int main() {
    std::cout << "Welcome to the Business Management System!" << std::endl;
    Person person("John", "Doe");
    std::cout << "Person Name: " << person.getName() << " " << person.getSurname() << std::endl;
    
    return 0;
}