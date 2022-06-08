#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(int value, str name): name(name)
{
    this->setGrade(value);
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

void Bureaucrat::setGrade(int value)
{
    try
    {
        if (value < 1)
            throw "GradeTooLowException";
        else if (value > 150)
            throw "GradeTooHighException";
        this->grade = value;
    }
    catch (const char *msg)
    {
        std::cout << msg << std::endl;
    }
}
void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signs form " << form.getName() << std::endl;
    }
    catch(const char *msg)
    {
        std::cout << this->getName() << " cannot sign form " << form.getName() << " because " << msg << std::endl;
    }
    
}
std::ostream &operator<<(std::ostream &o, Bureaucrat &rhs)
{
    o << rhs.getName() << ", " << "bureaucrat grade " << rhs.getGrade() << ".";
    return o;
}

