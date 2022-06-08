#pragma once

#include <iostream>
#include <string>
#include "Form.hpp"

#define str std::string
class Form;
class Bureaucrat
{
    public:
        Bureaucrat();
        Bureaucrat(int value, str _name);
        ~Bureaucrat();
        
        
        int getGrade(void);
        str getName(void);
        void setGrade(int value);
        void incrementGrade(void);
        void decrementGrade(void);
        
        void signForm(Form &form);
    private:
        const str name;
        int grade;
};
std::ostream &operator<<(std::ostream &o, Bureaucrat &rhs);