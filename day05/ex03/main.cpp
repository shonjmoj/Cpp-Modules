#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main() {
	try
	{
		Intern someRandomIntern;
		Form * rrf;

		rrf = someRandomIntern.makeForm("presidential request", "Bender");
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	
	return 0;
}