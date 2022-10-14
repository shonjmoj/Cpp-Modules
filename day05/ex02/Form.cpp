#include "Form.hpp"

Form::Form(const std::string name, int signGrade, int execGrade):
	_name(name),
	_isSigned(false),
	_signGrade(signGrade),
	_execGrade(execGrade) {
	if (this->_signGrade < 1 || this->_execGrade < 1)
		throw Form::GradeTooHighException();
	else if (this->_signGrade > 150 || this->_execGrade > 150)
		throw Form::GradeTooLowException();
	else
		std::cout << this->_name << " form created\n";
}

Form::Form(Form const & copy): _name(copy.getName()), _signGrade(copy.getSignGrade()), _execGrade(copy.getExecGrade()) {
	return;
}

const std::string Form::getName() const {
	return this->_name;
}

Form::~Form()
{
	return;
}

int Form::getSignGrade() const  {
	return this->_signGrade;
}

int Form::getExecGrade() const  {
	return this->_execGrade;
}

bool Form::getIsSigned() const {
	return this->_isSigned;
}

void Form::setIsSigned(bool isSigned) {
	this->_isSigned = isSigned;
}

const char *Form::GradeTooHighException::what() const throw() {
	return "[FORM_EXCEPTION] : Grade is too high !";
}

const char *Form::NotSignedForm::what() const throw() {
	return "[FORM_EXCEPTION] : Form not signed !";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "[FORM_EXCEPTION] : Grade is too low !";
}

void Form::beSigned(Bureaucrat & b) {
	if (b.getGrade() <= this->getSignGrade())
		setIsSigned(true);
	else
		throw Form::GradeTooLowException();
}

std::ostream & operator<<(std::ostream & o, Form const & rhs) {
	o << rhs.getName() << " form, required grade to sign : " << rhs.getSignGrade() << ", to execute " << rhs.getExecGrade() << std::endl;
	return o;
}

Form  & Form::operator=(Form const & rhs) {
	if (this == &rhs)
		return *this;
	this->setIsSigned(rhs.getIsSigned());
	return *this;
}