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

str Form::getName(void)
{
    return this->name;
}

int Form::getIsSinged(void)
{
    return this->isSinged;
}

int Form::getGradeSign(void)
{
    return this->gradeSign;
}

int Form::getGradeExec(void)
{
    return this->gradeExec;
}


std::ostream &operator<<(std::ostream &o, Form &rhs)
{
    o << rhs.getName() << " is signed : " << (rhs.getIsSinged() ? "yes" : "No") << ", and has grade to sign " << rhs.getGradeSign() << " and grade to execute " << rhs.getGradeExec() << std::endl;
    return o;
}