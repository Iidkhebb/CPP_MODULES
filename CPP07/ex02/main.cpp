#include <iostream>
#include "Array.hpp"

#define MAX_VAL 5
int main(int, char**)
{
    std::cout << "-------------------INT TEST -------------------" << std::endl;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers; // <-- test assignement operator
        Array<int> test(tmp); // <-- test copy constructor
    }

    // ---- DISPLAY VALUES ----
    for (int i = 0; i < MAX_VAL; i++)
    {
        std::cout << "Randon values N : "<< i <<  " -> " << numbers[i] << std::endl;
    }
    // ---- DISPLAY VALUES ----

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    std::cout << "*** RANG TEST ***" << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "*** RANG TEST ***\n\n" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//

    /// ------------------------< STRING TEST >----------------------
    
    std::cout << "------------ STRING TEST ------------" << std::endl;

    Array<std::string> names(MAX_VAL);
    std::string* mirror2 = new std::string[MAX_VAL];
    for (int i = 0; i < MAX_VAL; i++)
    {
        names[i] = "Hello " + std::to_string(i);
        mirror2[i] = "Hello " + std::to_string(i);
    }
    
    {
        Array<std::string> tmp = names; // <-- test assigenment operator
        Array<std::string> test(tmp); // <-- test copy constructor
    }
    
    // ---- DISPLAY VALUES ----
    for (int i = 0; i < MAX_VAL; i++)
    {
        std::cout << "String values N : "<< i <<  " -> " << names[i] << std::endl;
    }
    // ---- DISPLAY VALUES ----
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror2[i] != names[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    
    std::cout << "*** RANG TEST ***" << std::endl;
    try
    {
        names[-2] = "";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        names[MAX_VAL] = "";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "*** RANG TEST ***" << std::endl;
    
    
    for (int i = 0; i < MAX_VAL; i++)
    {
        names[i] = "Hello " + std::to_string(rand());
    }
    delete [] mirror2;//
    return 0;
}