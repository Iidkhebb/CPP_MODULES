#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form(RRF, 72, 45)
{
	this->target = "NO VALUE";
}
RobotomyRequestForm::RobotomyRequestForm(str target): Form(RRF, 72, 45)
{
	this->target = target;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src): Form(RRF, 72, 45)
{
	this->target = src.target;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	this->target = rhs.target;
	return (*this);
}
RobotomyRequestForm::~RobotomyRequestForm()
{

}

// --------------Methods------------------

void RobotomyRequestForm::action(void) const
{
	std::cout << "-->>>BZZZZZZZZZZZZZZZZZZZZZZ.....<<<--" << std::endl;
	if (rand() % 2 == 0)
		std::cout << this->target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->target << " has been robotomized unsuccessfully" << std::endl;
}