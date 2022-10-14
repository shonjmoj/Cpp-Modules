#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon", 25, 5), _target(target)
{
    return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy): Form(copy.getName(), copy.getSignGrade(), copy.getExecGrade()) {
    return ; 
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    return;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (!this->getIsSigned())
        throw Form::NotSignedForm();
    else if (this->getExecGrade() < executor.getGrade())
        throw Form::GradeTooLowException();
    else
        std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox\n";
}