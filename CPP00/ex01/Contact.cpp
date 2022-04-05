#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact()
{
    this->FirstName = "";
    this->LastName = "";
    this->NickName = "";
    this->PhoneNumber = "";
    this->DarkestSecret = "";
}
Contact::Contact(str FirstName, str LastName,str NickName,str PhoneNumber,str DarkestSecret)
{
    this->FirstName = FirstName;
    this->LastName = LastName;
    this->NickName = NickName;
    this->PhoneNumber = PhoneNumber;
    this->DarkestSecret = DarkestSecret;
}