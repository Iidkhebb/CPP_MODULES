#pragma once

#include <iostream>
#include <string>
#include "Contact.hpp"

#define print(s) std::cout << s
#define input(x) getline(std::cin, x)
#define str std::string
#define is ==

class PhoneBook
{
private:
    Contact contacts[8];
    int contacts_count;

public:
    PhoneBook();
    void add();
    void search();
};