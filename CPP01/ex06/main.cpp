#include "Harl.hpp"

int main(int ac, char *av[])
{
    if (ac == 2)
    {
        Harl harl;
        harl.filter(av[1]);
    }
    else
    {
        std::cout << "ARG ERROR !" << std::endl;
        return 1;
    }
    return 0;
}
