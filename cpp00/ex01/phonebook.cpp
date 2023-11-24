
#include <iostream>
#include <string> // Include for std::string

int main() {
    std::cout << "Tell us about yourself: ";
    while (1)
    {
        std::string c; // std::string, not just string
        std::getline(std::cin, c); // std::cin, not just cin
        if (c == "EXIT") { // Use == for string comparison
            std::cout << "exit krab";
            break;
        }
    }

    return 0;
}
