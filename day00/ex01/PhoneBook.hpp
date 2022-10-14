#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook {
	static int g_index;
	Contact contacts[8];
	int length;

	public :
		PhoneBook() {
			this->length = 0;
		}
		Contact*	getter();
		int getGlobalIndex();
		int getLength();
		void addContact(std::string firstName, std::string lastName, std::string nickName, std::string phone, std::string darkestSecret);
		void format(std::string str);
		void printContacts(int i);
};

#endif