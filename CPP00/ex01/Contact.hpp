#pragma once
#include <iostream>
#include <string>
#define print(s) std::cout << s
#define input(x) getline(std::cin, x)
#define str std::string
#include <map>
#include <vector>

class Contact
{
private:
    str FirstName;
    str LastName;
    str NickName;
    str PhoneNumber;
    str DarkestSecret;

public:
    Contact();
    Contact(str FirstName, str LastName,str NickName,str PhoneNumber, str DarkestSecret);
    str get_first_name();
    str get_last_name();
    str get_nickaname();
};