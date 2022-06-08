#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat Bureaucrat_obj_1(10, "MARK Bureaucrat");
        Bureaucrat Bureaucrat_obj_2(3, "JOHN Bureaucrat");
        
        Form form_obj("FIRST FORM", 7, 1);
        
        std::cout << Bureaucrat_obj_1 << std::endl;
        std::cout << Bureaucrat_obj_2 << std::endl;

        std::cout << form_obj << std::endl;  
        Bureaucrat_obj_1.signForm(form_obj); // <- this line will throw an exception
        Bureaucrat_obj_2.signForm(form_obj);
        std::cout << form_obj << std::endl; // <- this line will NOT throw an exception
        
        
        
        Form form_obj_2("SECOND FORM", 0, 1); // <- this line will throw an exception because gradeSign is 0
    }
    catch (const char *msg)
    {
        std::cout << "Exception: " << msg << std::endl; // <- HANDLE EXCEPTION of SECOND FORM
    }
    return 0;
};