#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    const std::string _name;
    int _grade;

public:
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat & copy);
    ~Bureaucrat();

    std::string getName() const;
    int getGrade() const;

    void setGrade(int grade);

    void incrementGrade();
    void decrementGrade();

    void signForm(Form & form);

    Bureaucrat & operator=(Bureaucrat const & rhs);

    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif