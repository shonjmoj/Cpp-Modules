#include "Contact.hpp"

int Contact::getIndex() {
	return this->index;
}

std::string Contact::getFname() {
	return this->firstName;
}

std::string Contact::getLname() {
	return this->lastName;
}

std::string Contact::getNname() {
	return this->nickName;
}

std::string Contact::getPhone() {
	return this->phone;
}

std::string Contact::getDarkestSecret() {
	return this->darkestSecret;
}

void Contact::setIndex(int index) {
	this->index = index;
}

void Contact::setFname(std::string firstName) {
	this->firstName = firstName;
}

void Contact::setLname(std::string lastName) {
	this->lastName = lastName;
}

void Contact::setNname(std::string nickName) {
	this->nickName = nickName;
}

void Contact::setPhone(std::string phone) {
	this->phone = phone;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
	this->darkestSecret = darkestSecret;
}