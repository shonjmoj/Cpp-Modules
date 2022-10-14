#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
	try
	{
		ShrubberyCreationForm form("Home");
		PresidentialPardonForm a("President");
		RobotomyRequestForm b("Robo");
		Bureaucrat issam("issam", 5);
		std::cout << form;
		std::cout << a;
		std::cout << b;
		form.beSigned(issam);
		a.beSigned(issam);
		b.beSigned(issam);
		issam.executeForm(form);
		issam.executeForm(a);
		issam.executeForm(b);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	
	return 0;
}