#include "PhoneBook.hpp"

PhoneBook::PhoneBook() { 
    this->_nb_of_contacts = 0;
    }

PhoneBook::~PhoneBook() {}

void PhoneBook::prompt_input(void) {
    
    std::cout << COLOR_GREEN
              << "PLEASE ENTER ONE OF 3 OPTIONS: " << COLOR_DEFAULT
              << std::endl;
    std::cout << COLOR_BLUE
              << "===================================" << COLOR_DEFAULT
              << std::endl;
    std::cout << COLOR_MAGENTA << "[ADD]" << COLOR_DEFAULT << std::setw(10);
    std::cout << COLOR_MAGENTA << "[SEARCH]" << COLOR_DEFAULT << std::setw(10);
    std::cout << COLOR_MAGENTA << "[EXIT]" << COLOR_DEFAULT
              << std::endl;
    std::cout << COLOR_BLUE
              << "===================================" << COLOR_DEFAULT
              << std::endl;
}

void PhoneBook::print_headline() {
    std::cout << "|";
    std::cout << "     ";
    std::cout << "INDEX"
              << "|";

    std::cout << "     ";
    std::cout << "FNAME"
              << "|";

    std::cout << "     ";
    std::cout << "LNAME"
              << "|";

    std::cout << "     ";
    std::cout << "NNAME"
              << "|";
    std::cout << std::endl;
}

void PhoneBook::add_contact(void) {
    std::string user_input;

    std::cout << "FIRST NAME : ";
    while (std::getline(std::cin, user_input)) {
        if (user_input.empty()) {
            std::cout << "Contact field can't have an empty field!"
                      << std::endl;
           return;
        } else
            break;
    }
    Contact tmpContact;
    tmpContact.set_FirstName(user_input);
    std::cout << "LAST NAME : ";
    while (std::getline(std::cin, user_input)) {
        if (user_input.empty()) {
            std::cout << "Contact field can't have an empty field!"
                      << std::endl;
            return;
        } else
            break;
    }
    tmpContact.set_LastName(user_input);
    std::cout << "NICK NAME : ";
    while (std::getline(std::cin, user_input)) {
        if (user_input.empty()) {
            std::cout << "Contact field can't have an empty field!"
                      << std::endl;
            return;
        } else
            break;
    }
    tmpContact.set_NickName(user_input);
    std::cout << "PHONE NUMBER : ";
    while (std::getline(std::cin, user_input)) {
        if (std::cin.eof()) break;
        if (user_input.empty()) {
            std::cout << "Contact field can't have an empty field!"
                      << std::endl;
            return;
        } else
            break;
    }
    tmpContact.set_PhoneNumber(user_input);
    std::cout << "DARKEST SECRET : ";
    while (std::getline(std::cin, user_input)) {
        if (std::cin.eof()) break;
        if (user_input.empty()) {
            std::cout << "Contact field can't have an empty field!"
                      << std::endl;
            return;
        } else
            break;
    }
    tmpContact.set_DarkestSecret(user_input);
    this->_myContacts[_nb_of_contacts % 8] = tmpContact;
    ++_nb_of_contacts;
    
}


void PhoneBook::search_contact() {
    int i;
    int index;
    std::string input;

    i = 0;
    print_headline();
    while (i <= 7) {
        _myContacts[i].print_table_contact(i);
        i++;
    }
    if (this->_nb_of_contacts == 0)
        std::cout << "Awesome Phonebook is empty" << std::endl;
    else {
        std::cout << "Please, provide the index of the entry to display : ";
        while (getline(std::cin, input)) {
            if (std::cin.eof()) break;
            index = atoi(input.c_str());
            if (index >= 0 && index <= 7) {
                _myContacts[index].get_input();
                break;
            } else {
                std::cout << "Sorry! Invalid index input!" << std::endl;
                return;
            }
        }
    }
}


