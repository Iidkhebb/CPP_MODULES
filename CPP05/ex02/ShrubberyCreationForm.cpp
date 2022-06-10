#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form(SCF, 145, 137)
{
	this->target = "NO VALUE";
}

ShrubberyCreationForm::ShrubberyCreationForm(str target): Form(SCF, 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src): Form(SCF, 145, 137)
{
	this->target = src.target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	this->target = rhs.target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}


// ************--Methods******************


void ShrubberyCreationForm::action(void) const
{
	std::ofstream output_file;
	str name = this->target + "_shrubbery";
	output_file.open(name.c_str());
    if (!output_file) {
        std::cerr << "can't open " << this->target + "" << std::endl;
        return ;
    }

	output_file <<
	"        -->*<--\n"
	"          /_\n"
	"         /_--\n"
	"        /_/_/_\n"
	"       /_******\n"
	"      /_/_/_/_/_\n"
	"     /_*********-\n"
	"    /_/_/_/_/_/_/_\n"
	"   /_************--\n"
	"  /_/_/_/_/_/_/_/_/_\n"
	" /_******************\n"
	"/_/_/_/_/_/_/_/_/_/_/_\n"
	"         [____]			 \n"
	" 							 \n"
	<< std::endl;
	output_file.close();
}