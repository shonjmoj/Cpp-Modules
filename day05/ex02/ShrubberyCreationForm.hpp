#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
    std::string _target;
    
public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const & copy);
    ~ShrubberyCreationForm();

    std::string getTarget() const;

    void execute(Bureaucrat const &executor) const;
};

#endif