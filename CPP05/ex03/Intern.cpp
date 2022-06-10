#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const &src)
{
    *this = src;
}

Intern &Intern::operator=(Intern const &rhs)
{
    if (this != &rhs)
    {
    }
    return (*this);
}

Intern::~Intern()
{
    std::cout << "\n\n<<<< Intern is going HOME >>>>\n\n" << std::endl;
}

const char *Intern::FormNotFoundException::what() const throw()
{
    return ("Inter : Form not found");
}

// --------- Methods ---------

Form *Intern::RobotomyRequest(const str &target) const
{
    return (new RobotomyRequestForm(target));
}

Form *Intern::PresidentialPardon(const str &target) const
{
    return (new PresidentialPardonForm(target));
}

Form *Intern::ShrubberyCreation(const str &target) const
{
    return (new ShrubberyCreationForm(target));
}

Form *Intern::makeForm(std::string name, std::string target)
{    
    str form_list[3] = {"RobotomyRequestForm", "ShrubberyCreationForm", "PresidentialPardonForm"};
    typedef Form *(Intern::*ptr_func)(const str &target) const;
    ptr_func ptr_funcs[3] = {&Intern::RobotomyRequest, &Intern::ShrubberyCreation, &Intern::PresidentialPardon};

    for (int i = 0; i < 3; i++)
    {
        if (form_list[i] == name)
            return ((this->*ptr_funcs[i])(target));
    }
    throw Intern::FormNotFoundException();
}