#include "PhoneBook.hpp"

int PhoneBook::g_index = 0;

Contact* PhoneBook::getter() {
	return this->contacts;
}

int PhoneBook::getGlobalIndex() {
	return this->g_index;
}

int PhoneBook::getLength() {
	return this->length;
}

void PhoneBook::addContact(std::string firstName, std::string lastName, std::string nickName, std::string phone, std::string darkestSecret) {
	int i = this->getGlobalIndex();

	this->contacts[i].setIndex(i);
	this->contacts[i].setFname(firstName);
	this->contacts[i].setLname(lastName);
	this->contacts[i].setNname(nickName);
	this->contacts[i].setPhone(phone);
	this->contacts[i].setDarkestSecret(darkestSecret);

	if (length != 8)
		length++;
	if (this->g_index == 7)
		this->g_index = 0;
	else
		this->g_index += 1;
}

void PhoneBook::format(std::string str) {
	if (str.size() <= 9)
		std::cout << std::string(10 - str.size(), ' ') << str << "|";
	else
		std::cout << str.substr(0, 9) << '.' << "|";
}

void PhoneBook::printContacts(int i) {
	std::string firstName = this->contacts[i].getFname();
	std::string lastName = this->contacts[i].getLname();
	std::string nickName = this->contacts[i].getNname();
	std::string phone = this->contacts[i].getPhone();
	std::string darkestSecret = this->contacts[i].getDarkestSecret();
	
	std::cout << '\n';
	std::cout << std::string(5, ' ') << "index" << "|" ;
	std::cout << std::string(1, ' ') << "firstname" << "|" ;
	std::cout << std::string(2, ' ') << "lastname" << "|" ;
	std::cout << std::string(2, ' ') << "nickname" << "|" << std::string(5, ' ') << "phone" << "|" << "darksecret" << "|" << std::endl;
	std::cout << std::string(9, ' ') << this->contacts[i].getIndex() << "|";
	format(firstName);
	format(lastName);
	format(nickName);
	format(phone);
	format(darkestSecret);
	std::cout << '\n';
	std::cout << '\n';
}