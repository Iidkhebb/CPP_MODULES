#include "String.hpp"

int main(int ac, char *av[])
{
    if (ac != 1)
    {
        for (int i = 1; i < ac; i++)
        {
            String s(av[i]);
            print(s.upper());
        }
        print("\n");
    }
    else
        print("* LOUD AND UNBEARABLE FEEDBACK NOISE *\n");
    return 0;
}
