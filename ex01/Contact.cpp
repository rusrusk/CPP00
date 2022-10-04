#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void Contact::set_FirstName(std::string user_FirstName) {
    this->first_name = user_FirstName;
}

std::string Contact::get_FirstName() { return this->first_name; }

void Contact::set_LastName(std::string user_LastName) {
    this->last_name = user_LastName;
}

std::string Contact::get_LastName() { return this->last_name; }

void Contact::set_NickName(std::string user_NickName) {
    this->nick_name = user_NickName;
}

std::string Contact::get_NickName() { return this->nick_name; }

void Contact::set_PhoneNumber(std::string user_PhoneNumber) {
    this->phone_number = user_PhoneNumber;
}

std::string Contact::get_PhoneNumber() { return this->phone_number; }

void Contact::set_DarkestSecret(std::string user_DarkestSecret) {
    this->darkest_secret = user_DarkestSecret;
}

std::string Contact::get_DarkestSecret() { return this->darkest_secret; }


void Contact::get_input() {
    std::cout << "FIRST NAME: "	<< this->get_FirstName() << std::endl;
    std::cout << "LAST NAME: "	<< this->get_LastName() << std::endl;
    std::cout << "NICK NAME: " << this->get_NickName() << std::endl;
    std::cout << "PHONE NUMBER: " << this->get_PhoneNumber() << std::endl;
    std::cout << "DARKEST SECRET: " << this->get_DarkestSecret() << std::endl;
}

std::string	Contact::truncate_contact(std::string str) {

	if (str.length() >= 10)
	{
		str = str.substr(0,9).append(".");
	}
    return str;
}

void Contact::print_table_contact(int i) {

    std::cout << "|" << std::setw(10) << i << "|";
    if (this->get_FirstName().size() > 10)
        std::cout << truncate_contact(first_name) << "|";
    else
        std::cout << std::setw(10) << this->get_FirstName() << "|";
    if (this->get_LastName().size() > 10)
        std::cout << truncate_contact(last_name) << "|";
    else
        std::cout << std::setw(10) << this->get_LastName() << "|";
    if (this->get_NickName().size() > 10)
        std::cout << truncate_contact(nick_name) << "|";
    else
        std::cout << std::setw(10) << truncate_contact(nick_name) << "|";
    std::cout << std::endl;
}

