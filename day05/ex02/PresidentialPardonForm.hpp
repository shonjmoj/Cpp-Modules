#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {

    std::string _target;

	public :
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & copy);
		~PresidentialPardonForm();

		void execute(Bureaucrat const &executor) const;

};

#endif