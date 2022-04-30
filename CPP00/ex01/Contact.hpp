#pragma once
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "./bs/BetterSyntax.hpp"

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
    str get_phone();
    str get_secret();
};