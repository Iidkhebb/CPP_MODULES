#include "Bureaucrat.hpp"
#include "Form.hpp"

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
    try
    {
        Form *SCF_Form = new ShrubberyCreationForm("SCF");
        Bureaucrat mark(80, "Mark");
        Bureaucrat alice(145, "Alice");
        
        std::cout << "--------------- Sign the Form --------------" << std::endl;
        
        mark.signForm(*SCF_Form); // <-- Mark signs the form with grade 80
        alice.signForm(*SCF_Form); // <-- Alice signs the form with grade 145

        std::cout << "\n--------------- Execute the Form --------------" << std::endl;
        
        mark.executeForm(*SCF_Form); // <-- Mark executes the form with grade 80
        alice.executeForm(*SCF_Form); // <-- throws an exception because grade 145 is not high enough 135 is required

        std::cout << "\n------------------ Let's try to decrementGrade the grade ------------" << std::endl;
        
        alice.decrementGrade();// Grade is 146
        alice.signForm(*SCF_Form);
     
        std::cout << "\n------------------ Let's try to incrementGrade the grade ------------" << std::endl;
        
        alice.incrementGrade();// Grade is 146
        alice.signForm(*SCF_Form);
    }
    catch( std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n************************ RobotomyRequestForm *************************" << std::endl;

    try
    {
        Form *SCF_Form = new RobotomyRequestForm("SCF");
        Bureaucrat mark(30, "Mark");
        Bureaucrat alice(72, "Alice");
        
        std::cout << "--------------- Sign the Form --------------" << std::endl;
        
        mark.signForm(*SCF_Form); // <-- Mark signs the form with grade 30
        alice.signForm(*SCF_Form); // <-- Alice signs the form with grade 72

        std::cout << "\n--------------- Execute the Form --------------" << std::endl;
        
        mark.executeForm(*SCF_Form); // <-- Mark executes the form with grade 30
        alice.executeForm(*SCF_Form); // <-- throws an exception because grade 72 is not high enough 45 is required

        std::cout << "\n------------------ Let's try to decrementGrade the grade ------------" << std::endl;
        
        alice.decrementGrade();// Grade is 73
        alice.signForm(*SCF_Form);
     
        std::cout << "\n------------------ Let's try to incrementGrade the grade ------------" << std::endl;
        
        alice.incrementGrade();// Grade is 72
        alice.signForm(*SCF_Form);
        alice.executeForm(*SCF_Form); // <-- throws an exception because grade 72 is not high enough 45 is required
    }
    catch( std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n************************ PresidentialPardonForm *************************" << std::endl;
    try
    {
        Form *SCF_Form = new PresidentialPardonForm("SCF");
        Bureaucrat mark(5, "Mark");
        Bureaucrat alice(7, "Alice");
        
        std::cout << "--------------- Sign the Form --------------" << std::endl;
        
        mark.signForm(*SCF_Form); // <-- Mark signs the form with grade 5
        alice.signForm(*SCF_Form); // <-- Alice signs the form with grade 7

        std::cout << "\n--------------- Execute the Form --------------" << std::endl;
        
        mark.executeForm(*SCF_Form); // <-- Mark executes the form with grade 5
        alice.executeForm(*SCF_Form); // <-- throws an exception because grade 7 is not high enough 5 is required

        std::cout << "\n------------------ Let's try to decrementGrade the grade ------------" << std::endl;
        
        alice.decrementGrade();// Grade is 8
        alice.signForm(*SCF_Form);
     
        std::cout << "\n------------------ Let's try to incrementGrade the grade ------------" << std::endl;
        
        alice.incrementGrade();// Grade is 7
        alice.incrementGrade();// Grade is 6
        alice.incrementGrade();// Grade is 5
        alice.signForm(*SCF_Form);
        alice.executeForm(*SCF_Form); // <-- Sucessfully executes the form by Alice
    }
    catch( std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    
    return 0;
};