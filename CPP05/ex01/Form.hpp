#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

#define str std::string
class Bureaucrat;
class Form
{
    private:
        const str  name;
        bool isSinged;
        const int gradeSign;
        const int gradeExec;

    public:
        Form();
        Form(str name, int gradeSign, int gradeExec);
        Form(Form const &src);
        Form &operator=(Form const &rhs);
        ~Form();
        class GradeTooLowException :  public std::exception
        {
            public:
                const char *what() const throw();
        };
        class GradeTooHighException :  public std::exception
        {
            public:
                const char *what() const throw();
        };
        str getName(void);
        int getIsSinged();
        int getGradeSign();
        int getGradeExec();

        void beSigned(Bureaucrat &src);
        
};

std::ostream &operator<<(std::ostream &o, Form &rhs);