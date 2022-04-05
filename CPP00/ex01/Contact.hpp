#include "PhoneBook.hpp"

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
};