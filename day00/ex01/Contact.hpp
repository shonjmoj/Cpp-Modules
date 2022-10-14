#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>

class Contact {
	int index;
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phone;
	std::string darkestSecret;

	public :
		int getIndex();
		std::string getFname();
		std::string getLname();
		std::string getNname();
		std::string getPhone();
		std::string getDarkestSecret();

		void setIndex(int index);
		void setFname(std::string firstName);
		void setLname(std::string lastName);
		void setNname(std::string nickName);
		void setPhone(std::string phoneNumber);
		void setDarkestSecret(std::string darkestSecret);
};

#endif