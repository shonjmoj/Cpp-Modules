#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form {
	const std::string _name;
	bool _isSigned;
	const int _signGrade;
	const int _execGrade;

	public:
		Form(const std::string name, int signGrade, int execGrade);
		Form(Form const & copy);
		~Form();
		
		const std::string getName() const;
		bool getIsSigned() const ;
		int getSignGrade() const ;
		int getExecGrade() const ;

		void setIsSigned(bool isSigned);

		void beSigned(Bureaucrat & b);

		Form & operator=(Form const & rhs);

		virtual void execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException : public std::exception {
			public :
				const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception {
			public :
				const char* what() const throw();
		};
		
		class NotSignedForm : public std::exception {
			public :
				const char* what() const throw();
		};


};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif