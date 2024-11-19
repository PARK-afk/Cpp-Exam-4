#include "PhoneBook.hpp"

PhoneBook::PhoneBook(/* args */)
{
	this->idx = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::addContact()
{
	if (this->contact[idx % 8].makeContact() == 0)
		this->idx++;
	else return ;
}

// cutstring

std::string	PhoneBook::cutString(std::string str)
{
	if (str.length() > 10)
	{
		return str.substr(0, 9) + ".";
	}
	else
		return str;
}

void	PhoneBook::printInfo()
{
	for (int a = 0; a < ((this->idx > 8) ? 8 : idx); a++)
	{
		std::cout << std::right << std::setw(10) << a + 1;
		std::cout << "|";
		std::cout << std::right << std::setw(10) << cutString(this->contact[a].getFirstName());
		std::cout << "|";
		std::cout << std::right << std::setw(10) << cutString(this->contact[a].getLastName());
		std::cout << "|";
		std::cout << std::right << std::setw(10) << cutString(this->contact[a].getNickName());std::cout << "|";
		std::cout << std::right << std::setw(10) << cutString(this->contact[a].getPhoneNumber()) << "|" << std::endl;
		// std::cout << std::right << std::setw(10) << this->contact[a].getDarkestSecret() << "|" << std::endl;
	}
}

void	PhoneBook::searchPreview()
{
	std::cout << std::right << std::setw(10) << "index";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "FirstName";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "LastName";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "NickName";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "Number" << "|" << std::endl;
}

void	PhoneBook::selectPrint(int inputNumber)
{
	if (this->contact[inputNumber].getFirstName().empty())
	{
		std::cout << "Not Found Search Data" << std::endl;
		return ;
	}
	for (int i = 0; i < 8; i++)
	{
		if (i == inputNumber)
		{
			std::cout << "First Name : " << this->contact[i].getFirstName() << std::endl;
			std::cout << "Last Name  : " << this->contact[i].getLastName() << std::endl;
			std::cout << "NickName : " << this->contact[i].getNickName() << std::endl;
			std::cout << "Phone Number : " << this->contact[i].getPhoneNumber() << std::endl;
			std::cout << "Darkest Secret : "<< this->contact[i].getDarkestSecret() << std::endl;
			break ;
		}
	}
	return ;
}
