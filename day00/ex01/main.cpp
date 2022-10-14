#include "Contact.hpp"
#include "PhoneBook.hpp"



int main() {
	PhoneBook book;
	Contact* contacts = book.getter();
	std::string command;
	int index;
	int i;
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phone;
	std::string darkestSecret;

	std::cout << "Command : ";
	std::cin >> command;

	while(1) {
		if (command == "EXIT")
			return 0;
		if (command == "ADD") {
			std::cout << "firstname : ";
			std::cin >> firstName;
			std::cout << "lastname : ";
			std::cin >> lastName;
			std::cout << "nickname : ";
			std::cin >> nickName;
			std::cout << "phone : ";
			std::cin >> phone;
			std::cout << "darkestSecret : ";
			std::cin >> darkestSecret;
			book.addContact(firstName, lastName, nickName, phone, darkestSecret);
		}
		if (command == "SEARCH") {
			std::cout << "Enter the index of contact : ";
			std::cin >> index;
			i = 0;
			while(i < book.getLength()) {
				if (index == contacts[i].getIndex())
					book.printContacts(i);
				i++;
			}
		}
		std::cout << "Command : ";
		std::cin >> command;
	}
	return 0;
}