#pragma once

#include <string>
#include <iostream>
#include "Form.hpp"

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

#define str std::string

class Intern
{
    public:
        Intern();
        Intern(Intern const &src);
        Intern &operator=(Intern const &rhs);
        ~Intern();
        
        
        class FormNotFoundException : public std::exception
        {
            public:

                virtual const char *what() const throw();
        };
        Form *makeForm(std::string name, std::string target);
    
    private:
        Form *RobotomyRequest(const str &target) const;
        Form *PresidentialPardon(const str &target) const;
        Form *ShrubberyCreation(const str &target) const;
        
};

