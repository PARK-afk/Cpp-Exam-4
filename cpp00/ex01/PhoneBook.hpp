# ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <string>
#include <sstream>
#include <cstring>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact		contact[8];
	int			idx;
public:
	PhoneBook();
	~PhoneBook();
	void		printInfo();
	void		addContact();
	void		searchPreview();
	std::string	cutString(std::string str);
	void		selectPrint(int inputNumber);
};

#endif