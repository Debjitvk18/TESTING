
#include <iostream>
#include <string>

// Main function to demonstrate basic C++ functionality
int main() {
    // Print welcome message
    std::cout << "Welcome to Amazon Q's C++ Program!" << std::endl;
    
    // Declare and initialize variables
    std::string name;
    int age;
    
    // Get user input
    std::cout << "Please enter your name: ";
    std::getline(std::cin, name);
    
    std::cout << "Please enter your age: ";
    std::cin >> age;
    
    // Output personalized message
    std::cout << "Hello " << name << "! ";
    std::cout << "You are " << age << " years old." << std::endl;
    
    // Calculate and display years until 100
    int yearsTo100 = 100 - age;
    std::cout << "You have " << yearsTo100 << " years until you turn 100!" << std::endl;
    
    return 0;
}