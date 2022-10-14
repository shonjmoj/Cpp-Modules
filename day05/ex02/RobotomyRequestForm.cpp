#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Roboto", 72, 45), _target(target)
{
    return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy): Form(copy.getName(), copy.getSignGrade(), copy.getExecGrade()) {
    return;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    return;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if (executor.getGrade() <= this->getExecGrade() && this->getIsSigned()) {
        std::cout <<  "*" << this->getName() << " makes some drilling noises...*" << std::endl;
        std::cout << this->_target << " has been robotomized successfully 50% of time" << std::endl;
    }
    else if (!this->getIsSigned())
        throw Form::NotSignedForm();
    else {
        std::cout << "Robotomy failed !" << std::endl;
    }

}