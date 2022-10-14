#include "Bureaucrat.hpp"
int main() {
	try
	{
		Bureaucrat b("mehdi", 1);
		b.incrementGrade();
		std::cout << b.getGrade() << std::endl;
		b.decrementGrade();
		std::cout << b.getGrade() << std::endl;
		b.decrementGrade();
		std::cout << b.getGrade() << std::endl;

	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	
	
	return 0;
}