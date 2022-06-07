#include "Bureaucrat.hpp"

int main()
{
    std::cout << "---------- NO EXCEPTION RAISED ----------" << std::endl;
    Bureaucrat test(150, "MARK");
    test.incrementGrade();
    std::cout << test << std::endl;
    test.decrementGrade();
    std::cout << test << std::endl;
    std::cout << "---------- NO EXCEPTION RAISED ----------" << std::endl;
    
    std::cout << "---------- EXCEPTION RAISED ----------" << std::endl;
    Bureaucrat test2(1, "MARK");
    test2.incrementGrade(); // <<-- exception raised and garde won't be incremented
    std::cout << test2 << std::endl;
    test2.decrementGrade(); // <<-- exception NOT raised
    std::cout << test2 << std::endl;
    std::cout << "---------- EXCEPTION RAISED ----------" << std::endl;
};