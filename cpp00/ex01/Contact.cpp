#include "Contact.hpp"

std::string	Contact::getFirstName()
{
	return (this->firstName);
}
std::string	Contact::getLastName()
{
	return (this->lastName);
}

std::string	Contact::getNickName()
{
	return (this->nickName);
}

std::string	Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}

std::string	Contact::getDarkestSecret()
{
	return (this->darkestSecret);
}

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}

int	Contact::makeContact()
{
	std::cout << "firstname : ";
	std::getline(std::cin, this->firstName);
	if (this->firstName.empty())
		std::cout << "empty data" << std::endl;
	std::cout << "lastname : ";
	std::getline(std::cin, this->lastName);
	if (this->lastName.empty())
		std::cout << "empty data" << std::endl;
	std::cout << "nickname : ";
	std::getline(std::cin, this->nickName);
	if (this->nickName.empty())
		std::cout << "empty data" << std::endl;
	std::cout << "phone number : ";
	std::getline(std::cin, this->phoneNumber);
	if (this->phoneNumber.empty())
		std::cout << "empty data" << std::endl;
	std::cout << "darkest secret : ";
	std::getline(std::cin, this->darkestSecret);
	std::cout << std::endl;
	if (this->phoneNumber.find_first_not_of("0123456789") == false || this->firstName.empty()\
	|| this->lastName.empty() || this->nickName.empty() || this->phoneNumber.empty() || this->darkestSecret.empty())
	{
		std::string	empty;
		std::cout << "! ! ! C O N T A C T F A I L ! ! !" << std::endl;
		this->firstName = empty;
		this->lastName = empty;
		this->nickName = empty;
		this->phoneNumber = empty;

		return -1;
	}
	return 0;
}
