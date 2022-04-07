#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <map>
#include <vector>

Contact::Contact()
{
    this->FirstName = "";
    this->LastName = "";
    this->NickName = "";
    this->PhoneNumber = "";
    this->DarkestSecret = "";
}

Contact::Contact(str FirstName,str LastName,str NickName,str PhoneNumber,str DarkestSecret)
{
    this->FirstName = FirstName;
    this->LastName = LastName;
    this->NickName = NickName;
    this->PhoneNumber = PhoneNumber;
    this->DarkestSecret = DarkestSecret;
}

str Contact::get_first_name()
{
    return this->FirstName;
}

str Contact::get_last_name()
{
    return this->LastName;
}

str Contact::get_nickaname()
{
    return this->NickName;
}

str Contact::get_phone()
{
    return this->PhoneNumber;
}

str Contact::get_secret()
{
    return this->DarkestSecret;
}