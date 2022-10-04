#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define COLOR_DEFAULT "\033[0m"
#define COLOR_RED "\033[31m"
#define COLOR_GREEN "\033[32m"
#define COLOR_YELLOW "\033[33m"
#define COLOR_BLUE "\033[34m"
#define COLOR_MAGENTA "\033[35m"
#define COLOR_WHITE "\033[37m"

# include <stdio.h>
# include <string>
# include <iomanip>
# include <iostream>
# include "Contact.hpp"


class Contact;

class PhoneBook {
   public:
    // constructor and destructor
    PhoneBook(void);
    ~PhoneBook(void);

    // Methods
    void add_contact(void);
    void search_contact();
    void prompt_input(void);
    void print_headline(void);


   private:
    // member variables
    Contact _myContacts[8];
    int     _nb_of_contacts;
};

#endif
