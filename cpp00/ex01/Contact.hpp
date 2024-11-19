#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream> // 올바른 헤더 포함
#include <string>

class Contact
{
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;
public:
	Contact(/* args */);
	~Contact();
	int			makeContact();
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickName();
	std::string	getPhoneNumber();
	std::string	getDarkestSecret();
};

#endif // CONTACT_HPP
