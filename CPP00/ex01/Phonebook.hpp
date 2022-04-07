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















// template <typename T, typename T2>
// bool operator&(T obj1, T2 obj2) {
//     for (auto it =  obj2.begin(); it != obj2.end(); it++)
//     {
//         if (*it == obj1)
//             return true;
//     }
//     return false;
// }
// #define in &