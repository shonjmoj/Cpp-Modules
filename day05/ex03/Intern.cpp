#include "Intern.hpp"

typedef Form *(*Func)(std::string target);


Intern::Intern() {
    return;
}

Intern::~Intern() {
    return;
}

Form* Shrubbery(std::string target) {
    return new ShrubberyCreationForm(target);
}

Form* Robotomy(std::string target) {
    return new RobotomyRequestForm(target);
}

Form* Presidential(std::string target) {
    return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string name, std::string target) {
    Func arr[3] = {
        Shrubbery,
        Robotomy,
        Presidential
    };

    std::string forms[3] = {
        "shrubbery request",
        "robotomy request",
        "presidential request",
    };

    for (size_t i = 0; i < 3 ; i++)
    {
        if (name == forms[i])
            return arr[i](target);
    }
    std::cout << "Unknown form name" << std::endl;
    return NULL;
}