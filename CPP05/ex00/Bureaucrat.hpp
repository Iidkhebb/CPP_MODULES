#pragma once

#include <iostream>
#include <string>

#define str std::string

class Bureaucrat
{
    public:
        Bureaucrat();
        Bureaucrat(int value, str _name);
        Bureaucrat(Bureaucrat const &src);
        Bureaucrat &operator=(Bureaucrat const &rhs);
        ~Bureaucrat();
        
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
        
        int getGrade(void);
        str getName(void);
        void setGrade(int value);
        void incrementGrade(void);
        void decrementGrade(void);

    private:
        const str name;
        int grade;
};
std::ostream &operator<<(std::ostream &o, Bureaucrat &rhs);