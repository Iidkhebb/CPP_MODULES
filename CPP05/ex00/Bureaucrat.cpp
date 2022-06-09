#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(int value, str name): name(name)
{
    this->setGrade(value);
}

Bureaucrat::Bureaucrat(Bureaucrat const &src): name(src.name), grade(src.grade)
{
    *this = src;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    if (rhs.grade < 1)
        throw Bureaucrat::GradeTooLowException();
    else if (rhs.grade > 150)
        throw Bureaucrat::GradeTooHighException();
    this->grade = rhs.grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
}


int Bureaucrat::getGrade(void)
{
    return this->grade;
}

str Bureaucrat::getName(void)
{
    return this->name;
}

void Bureaucrat::decrementGrade(void)
{
    this->setGrade((this->getGrade()) + 1);
}

void Bureaucrat::incrementGrade(void)
{
    this->setGrade((this->getGrade()) - 1);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

void Bureaucrat::setGrade(int value)
{
    try
    {
        if (value < 1)
            throw Bureaucrat::GradeTooLowException();
        else if (value > 150)
            throw Bureaucrat::GradeTooHighException();
        this->grade = value;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &o, Bureaucrat &rhs)
{
    o << rhs.getName() << ", " << "bureaucrat grade " << rhs.getGrade() << ".";
    return o;
}

