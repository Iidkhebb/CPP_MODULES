#pragma once

#include "Form.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>

#define RRF "Robotomy Request Form"
#define str std::string

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(str target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
		~RobotomyRequestForm();

		void action(void) const;

	private:
		str target;
};