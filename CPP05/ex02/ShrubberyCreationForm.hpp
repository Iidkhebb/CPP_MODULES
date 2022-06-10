#pragma once

#include "Form.hpp"
#include <iostream>
#include <string>
#include <fstream>

#define SCF "Shrubbery Creation Form"
#define str std::string

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(str target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
		~ShrubberyCreationForm();

		void action(void) const;

	private:
		str target;
};