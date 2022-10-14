#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name) {
	if (grade < 1) 
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else {
		setGrade(grade);
		std::cout << "[BUREAUCRAT] : " << name << " created with " << grade << std::endl;
	}
}

Bureaucrat::~Bureaucrat() {
	std::cout << "[BUREAUCRAT] : " << "Descructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat & copy): _name(copy._name) {
	this->_grade = copy._grade;
	return;
}

std::string Bureaucrat::getName() const {
	return this->_name;
}

void Bureaucrat::setGrade(int grade) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

int Bureaucrat::getGrade() const {
	if (this->_grade < 0)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return this->_grade;
}

void Bureaucrat::incrementGrade() {
	int newGrade = this->_grade - 1;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		setGrade(newGrade);
}

void Bureaucrat::decrementGrade() {
	int newGrade = this->_grade + 1;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		setGrade(newGrade);
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "[BUREAUCRAT_EXCEPTION] : Grade is too high !";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "[BUREAUCRAT_EXCEPTION] : Grade is too low !";
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return o;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {
	if (this == &rhs)
		return *this;
	this->setGrade(rhs._grade);
	return *this;
}