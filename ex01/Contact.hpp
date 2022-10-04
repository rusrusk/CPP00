#ifndef CONTACT_HPP
# define CONTACT_HPP
 
# include <iostream>
# include <stdio.h>
# include <iomanip>


class Contact
{
public:
	//Constructors
	Contact();
	~Contact();

	//setters and getters methods
	void		set_FirstName(std::string user_FirstName);
	void		set_LastName(std::string user_LastName);
	void		set_NickName(std::string user_NickName);
	void		set_PhoneNumber(std::string user_PhoneNumber);
	void		set_DarkestSecret(std::string user_DarkestSecret);

	std::string get_FirstName();
	std::string get_LastName();
	std::string get_NickName();
	std::string get_PhoneNumber();
	std::string get_DarkestSecret();

    void		get_input(void);
	void		print_table_contact(int i);
	std::string truncate_contact(std::string str);

private:
	//member variables
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string	phone_number;
	std::string darkest_secret;

};

#endif
