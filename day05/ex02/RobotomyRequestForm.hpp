#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"


class RobotomyRequestForm : public Form {
	
	std::string _target;
	
	public :
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & copy);
		~RobotomyRequestForm();

		void execute(Bureaucrat const &executor) const;

};

#endif