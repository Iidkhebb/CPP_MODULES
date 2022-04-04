#include "megaphone.hpp"

int main(int ac, char *av[])
{
    if (ac != 1)
    {
    for (size_t i = 1; i < ac; i++)
        {
            String str(av[i]);
            print(str.upper());
        }
        print("\n");
    }
    else
        print("* LOUD AND UNBEARABLE FEEDBACK NOISE *\n");
    return 0;
}
