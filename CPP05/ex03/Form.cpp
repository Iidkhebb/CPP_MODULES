#include "Form.hpp"

Form::Form():name("any_Form_name"), isSinged(false), gradeSign(0), gradeExec(0)
{
}

Form::Form(str name, int gradeSign, int gradeExec):name(name), isSinged(false), gradeSign(gradeSign), gradeExec(gradeExec)
{
    if (gradeSign < 1 || gradeExec < 1)
        throw Form::GradeTooLowException();
    else if (gradeSign > 150 || gradeExec > 150)
        throw Form::GradeTooHighException();
    this->isSinged = false;
}

Form &Form::operator=(Form const &rhs)
{
    if (gradeSign < 1 || gradeExec < 1)
        throw Form::GradeTooLowException();
    else if (gradeSign > 150 || gradeExec > 150)
        throw Form::GradeTooHighException();
    this->isSinged = rhs.isSinged;
    return *this;
}

Form::Form(Form const &src):name(src.name), isSinged(src.isSinged), gradeSign(src.gradeSign), gradeExec(src.gradeExec)
{
    
    *this = src;
}

Form::~Form()
{

}

void Form::execute(Bureaucrat const & executor) const
{
    if (this->getIsSinged() == false)
        throw Form::NotSignedException();
    else if (executor.getGrade() > this->getGradeExec())
        throw Form::GradeTooLowException();
    else
    {
        this->action();
        std::cout << "Form : " << this->getName() << " executed by " << executor.getName() << std::endl;
    }
}

const char *Form::NotSignedException::what() const throw()
{
    return ("Form : Not Signed Exception");
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Form : Grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Form : Grade is too low");
}

void Form::beSigned(Bureaucrat &src)
{
    if (src.getGrade() > this->gradeSign)
    {
        throw Form::GradeTooLowException();
    }
    
    this->isSinged = true;
}

str Form::getName(void) const
{
    return this->name;
}

int Form::getIsSinged(void) const
{
    return this->isSinged;
}

int Form::getGradeSign(void) const
{
    return this->gradeSign;
}

int Form::getGradeExec(void) const
{
    return this->gradeExec;
}


std::ostream &operator<<(std::ostream &o, Form &rhs)
{
    o << rhs.getName() << " is signed : " << (rhs.getIsSinged() ? "yes" : "No") << ", and has grade to sign " << rhs.getGradeSign() << " and grade to execute " << rhs.getGradeExec() << std::endl;
    return o;
}