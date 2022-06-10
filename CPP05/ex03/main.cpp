#include "Bureaucrat.hpp"
#include "Form.hpp"

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern intern;
    
    try
    {
        Form *SCF_Form = intern.makeForm("ShrubberyCreationForm", "SCF");
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
        delete SCF_Form;
    }
    catch( std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n************************ RobotomyRequestForm *************************" << std::endl;

    try
    {
        Form *RRF_Form = intern.makeForm("RobotomyRequestForm", "RRF");
        Bureaucrat mark(30, "Mark");
        Bureaucrat alice(72, "Alice");
        
        std::cout << "--------------- Sign the Form --------------" << std::endl;
        
        mark.signForm(*RRF_Form); // <-- Mark signs the form with grade 30
        alice.signForm(*RRF_Form); // <-- Alice signs the form with grade 72

        std::cout << "\n--------------- Execute the Form --------------" << std::endl;
        
        mark.executeForm(*RRF_Form); // <-- Mark executes the form with grade 30
        alice.executeForm(*RRF_Form); // <-- throws an exception because grade 72 is not high enough 45 is required

        std::cout << "\n------------------ Let's try to decrementGrade the grade ------------" << std::endl;
        
        alice.decrementGrade();// Grade is 73
        alice.signForm(*RRF_Form);
     
        std::cout << "\n------------------ Let's try to incrementGrade the grade ------------" << std::endl;
        
        alice.incrementGrade();// Grade is 72
        alice.signForm(*RRF_Form);
        alice.executeForm(*RRF_Form); // <-- throws an exception because grade 72 is not high enough 45 is required
        delete RRF_Form;
    }
    catch( std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n************************ PresidentialPardonForm *************************" << std::endl;
    try
    {
        Form *PPF_Form = intern.makeForm("PresidentialPardonForm", "PPF");
        Bureaucrat mark(5, "Mark");
        Bureaucrat alice(7, "Alice");
        
        std::cout << "--------------- Sign the Form --------------" << std::endl;
        
        mark.signForm(*PPF_Form); // <-- Mark signs the form with grade 5
        alice.signForm(*PPF_Form); // <-- Alice signs the form with grade 7

        std::cout << "\n--------------- Execute the Form --------------" << std::endl;
        
        mark.executeForm(*PPF_Form); // <-- Mark executes the form with grade 5
        alice.executeForm(*PPF_Form); // <-- throws an exception because grade 7 is not high enough 5 is required

        std::cout << "\n------------------ Let's try to decrementGrade the grade ------------" << std::endl;
        
        alice.decrementGrade();// Grade is 8
        alice.signForm(*PPF_Form);
     
        std::cout << "\n------------------ Let's try to incrementGrade the grade ------------" << std::endl;
        
        alice.incrementGrade();// Grade is 7
        alice.incrementGrade();// Grade is 6
        alice.incrementGrade();// Grade is 5
        alice.signForm(*PPF_Form);
        alice.executeForm(*PPF_Form); // <-- Sucessfully executes the form by Alice
        delete PPF_Form;
    }
    catch( std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }


    std::cout << "\n************************ NON EXESTING FORM *************************\n" << std::endl;
    try
    {
        Form *None_Form = intern.makeForm("NON FORM", "NONE"); // <-- throws an exception because the form does not exist
        
        // PROGRAM WILL NOT REACH HERE

        Bureaucrat mark(5, "Mark");
        Bureaucrat alice(7, "Alice");
        
        std::cout << "--------------- Sign the Form --------------" << std::endl;
        
        mark.signForm(*None_Form);
        alice.signForm(*None_Form);

        std::cout << "\n--------------- Execute the Form --------------" << std::endl;
        
        mark.executeForm(*None_Form);
        alice.executeForm(*None_Form);

        std::cout << "\n------------------ Let's try to decrementGrade the grade ------------" << std::endl;
        
        alice.decrementGrade();// Grade is 8
        alice.signForm(*None_Form);
     
        std::cout << "\n------------------ Let's try to incrementGrade the grade ------------" << std::endl;
        
        alice.incrementGrade();
        alice.incrementGrade();
        alice.incrementGrade();
        alice.signForm(*None_Form);
        alice.executeForm(*None_Form);
        delete None_Form;
    }
    catch( std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    system("leaks main");
    return 0;
};