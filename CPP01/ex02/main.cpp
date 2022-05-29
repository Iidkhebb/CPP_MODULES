#include <iostream>
#include <string>
#define str std::string


int main()
{
    str string = "HI THIS IS BRAIN";
    str* stringPTR = &string;
    str& stringREF = string;

    std::cout << &string << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << string << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    return 0;
}
