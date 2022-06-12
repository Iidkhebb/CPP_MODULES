#include "convert.hpp"

int main(int ac, char *av[])
{
    if (ac == 2)
    {
        str value = av[1];
        if(is_char(value) or is_inf(value) or is_interger(value))
            print_convert(value);
        else
            std::cout << "WRONG TYPE" << std::endl;
    }
    else
        std::cout << "Usage: ./convert <number>" << std::endl;
    return 0;
};