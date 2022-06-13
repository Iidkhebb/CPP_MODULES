#include "iter.hpp"

#define TABLESIZE 5

void string_type(std::string const &s)
{
    std::cout << "string_type function called : " << s << std::endl;
    return ;
}

void int_type(int const &nbr)
{
    std::cout << "int_type function called : " << nbr << std::endl;
    return ;
}

void float_type(float const &nbr)
{
    std::cout << "float_type called : " << nbr << std::endl;
    return ;
}

int main()
{
    std::cout << "\n----------- STRING -----------\n" << std::endl;
    std::string arr[] = {"Hello", "World", "!", "C++", "07"};
    iter(arr, TABLESIZE, string_type);


    std::cout << "----------- INT -----------\n" << std::endl;
    int arr2[] = {1, 2, 3, 4, 5};
    iter(arr2, TABLESIZE, int_type);

    std::cout << "----------- FLOAT -----------\n" << std::endl;
    float arr3[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    iter(arr3, TABLESIZE, float_type);

    return 0;
}
