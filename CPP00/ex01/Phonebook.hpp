#pragma once
#include <iostream>
#include <string>
#include "Contact.hpp"

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