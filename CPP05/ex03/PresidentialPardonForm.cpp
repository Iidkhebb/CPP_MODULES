#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form(PPF, 25, 5)
{
	this->target = "NO VALUE";
}

PresidentialPardonForm::PresidentialPardonForm(str target): Form(PPF, 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src): Form(PPF, 25, 5)
{
	this->target = src.target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	this->target = rhs.target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

// --------------Methods------------------


void PresidentialPardonForm::action(void) const
{
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}