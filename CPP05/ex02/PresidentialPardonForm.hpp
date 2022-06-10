#pragma once

#include "Form.hpp"
#include <iostream>
#include <string>

#define PPF "Presidential Pardon Form"
#define str std::string

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(str target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
		~PresidentialPardonForm();

		void action(void) const;

	private:
		str target;
};