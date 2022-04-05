#pragma once

#include <iostream>
#include <string>

#define print(s) std::cout << s
#define input(x) getline(std::cin, x)
#define str std::string

class PhoneBook
{
private:
    char contacts[8];
    int contacts_count;
public:
    PhoneBook();
};