#include "Form.hpp"
#include "Bureaucrat.hpp"

int main() {
	try
	{
		Form form("F1", 140, 150);
		Bureaucrat b("mehdi", 0);
		b.signForm(form);
		form.beSigned(b);
		b.signForm(form);

	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	return 0;
}