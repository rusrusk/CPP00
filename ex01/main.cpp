#include "PhoneBook.hpp"

int PhoneBook::error_handler(std::string input) {

    std::cout << COLOR_RED << "Invalid option!" << COLOR_DEFAULT << std::endl;
    std::cout << "Do you want to try again? yes/no : ";
    do
    {
        std::getline(std::cin, input);
        if (input.compare("yes") == 0)
        {
            break;
        }
        else if (input.compare("no") == 0)
            return -1;
        else {
            std::cout << COLOR_RED << "The program accepts only yes/no input!" << COLOR_DEFAULT << std::endl;
            std::cout << "Do you want to try again? yes/no : ";
            continue;
        }
        std::cout << "Please enter a valid input (yes/no)" << std::endl;
    }
    while(true);
    return 1;
}

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
            if (phonebook1.error_handler(input) == -1)
                return (-1);
        }
    }
}
