#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery", 145, 137), _target(target)
{
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy) : Form(copy.getName(), copy.getSignGrade(), copy.getExecGrade()) {
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    return;
}

std::string ShrubberyCreationForm::getTarget() const
{
    return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() <= this->getExecGrade() && this->getIsSigned())
    {
        std::ofstream file(this->getTarget() + "_shrubbery");

        file << "\n         # #### ####\n";
        file << "      ### \\/#|### |/####\n";
        file << "     ##\\/#/ \\||/##/_/##/_#\n";
        file << "   ###  \\/###|/ \\/ # ###\n";
        file << " ##_\\_#\\_\\## | #/###_/_####\n";
        file << "## #### # \\ #| /  #### ##/##\n";
        file << " __#_--###`  |{,###---###-~\n";
        file << "           \\ }{\n";
        file << "            }}{\n";
        file << "            }}{\n";
        file << "            {{}\n";
        file << "      , -=-~{ .-^- _\n";

        file.close();
        std::cout << "A tree is planted in " << this->_target << std::endl;
    }
    else if (!this->getIsSigned())
        throw Form::NotSignedForm();
    else
        throw Form::GradeTooLowException();
}