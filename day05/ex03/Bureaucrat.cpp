#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name) {
	if (grade < 1) 
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else {
		setGrade(grade);
		std::cout << name << " created with garde : " << grade << std::endl;
	}
}

Bureaucrat::~Bureaucrat() {
	return;
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

void Bureaucrat::executeForm(Form const & form) {
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
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

void Bureaucrat::signForm(Form & form) {
	if (form.getIsSigned())
		std::cout << getName() << " signed " << form.getName() << " form" << std::endl;
	else if (getGrade() > form.getSignGrade())
		std::cout << getName() << " couldn't sign " << form.getName() << " because " << getGrade() << " is lower than " << form.getSignGrade() << std::endl;

}