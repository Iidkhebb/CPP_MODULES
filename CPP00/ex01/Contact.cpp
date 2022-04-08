#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <map>
#include <vector>
#include "BetterSyntax.hpp"


Contact Acess Contact()
{
    this->FirstName = "";
    this->LastName = "";
    this->NickName = "";
    this->PhoneNumber = "";
    this->DarkestSecret = "";
}

Contact Acess Contact(str FirstName,str LastName,str NickName,str PhoneNumber,str DarkestSecret)
{
    this->FirstName = FirstName;
    this->LastName = LastName;
    this->NickName = NickName;
    this->PhoneNumber = PhoneNumber;
    this->DarkestSecret = DarkestSecret;
}

str Contact Acess get_first_name()
{
    return this->FirstName;
}

str Contact Acess get_last_name()
{
    return this->LastName;
}

str Contact Acess get_nickaname()
{
    return this->NickName;
}

str Contact Acess get_phone()
{
    return this->PhoneNumber;
}

str Contact Acess get_secret()
{
    return this->DarkestSecret;
}