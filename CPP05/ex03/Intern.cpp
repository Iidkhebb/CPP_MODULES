#include "Intern.hpp"

Intern::Intern()
{
    this->_ptr_form = NULL;
}

Intern::Intern(Intern const &src)
{
    *this = src;
}

Intern &Intern::operator=(Intern const &rhs)
{
    if (this != &rhs)
    {
        this->_ptr_form = rhs._ptr_form;
    }
    return (*this);
}

Intern::~Intern()
{
    delete _ptr_form;
    std::cout << "\n\n<<<< Intern is going HOME >>>>\n\n" << std::endl;
}

const char *Intern::FormNotFoundException::what() const throw()
{
    return ("Inter : Form not found");
}

// --------- Methods ---------

Form *Intern::makeForm(std::string name, std::string target)
{    
    str form_list[3] = {"RobotomyRequestForm", "ShrubberyCreationForm", "PresidentialPardonForm"};
   
    for (int i = 0; i < 3; i++)
    {
        if (form_list[i] == name)
        {
            if (form_list[i] == "RobotomyRequestForm")
                this->_ptr_form = new RobotomyRequestForm(target);
            else if (form_list[i] == "ShrubberyCreationForm")
                this->_ptr_form = new ShrubberyCreationForm(target);
            else if (form_list[i] == "PresidentialPardonForm")
                this->_ptr_form = new PresidentialPardonForm(target);
            return this->_ptr_form;
        }
    }
    throw Intern::FormNotFoundException();
}