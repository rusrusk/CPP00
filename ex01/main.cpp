#include <iostream>

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void) {
    std::string input;
    bool boolean = true;
    PhoneBook phonebook1;

	std::cout << COLOR_GREEN
              << "IT IS MY PLEASURE TO INTRODUCE YOU WITH MY PHONEBOOK."
              << COLOR_DEFAULT << std::endl;
    std::cout << COLOR_BLUE
              << "===================================" << COLOR_DEFAULT
              << std::endl;
    while (boolean) {
        phonebook1.prompt_input();
        std::cout << "Option : ";
        std::getline(std::cin, input);
        if (std::cin.eof()) break;
        if (input.compare("EXIT") == 0)
            boolean = false;
        else if (input.compare("ADD") == 0)
            phonebook1.add_contact();
        else if (input.compare("SEARCH") == 0)
            phonebook1.search_contact();
        else
        {  
            std::cout << "Invalid option!" << std::endl;
            std::cout << "Do you want to try again? yes/no : ";
            getline(std::cin, input);
            if (input.compare("yes") == 0)
                continue;
            else if (input.compare("no") == 0)
                return -1;
        }
    }
}
