#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iomanip>
#include <string>
#include <cstdlib>

PhoneBook Acess PhoneBook()
{
    this->contacts_count = 0;
}

void PhoneBook Acess add()
{
    str First_Name;
    str Last_Name;
    str Nick_Name;
    str Phone_Number;
    str Darkest_Secret;

    First_Name = bs().input("ENTER YOUR FIRST NAME >");
    Last_Name = bs().input("ENTER YOUR LAST NAME >");
    Nick_Name = bs().input("ENTER YOUR Nick Name >");
    Phone_Number = bs().input("ENTER YOUR Phone Number >");
    Darkest_Secret = bs().input("ENTER YOUR Darkest Secret >");
    Contact Contact(First_Name, Last_Name, Nick_Name, Phone_Number, Darkest_Secret);
    this->contacts[contacts_count++ % 8] = Contact;
}

void PhoneBook Acess search()
{
    cout << std::setw(11) << "   Index  ";
    cout << std::setw(11) << "First Name ";
    cout << std::setw(11) << "Last Name ";
    cout << std::setw(11) << " Nick Name " << std::endl;
    for (int y = 0; y < this->contacts_count; y++)
    {
        Contact Contact = this->contacts[y];
        str fisrt = Contact.get_first_name();
        str last = Contact.get_last_name();
        str nick = Contact.get_nickaname();
        cout << std::setw(10) << y << "|";
        cout << std::setw(10) << (fisrt.length() > 10 ? fisrt.substr(0,9) +"." : fisrt) << "|";
        cout << std::setw(10) << (last.length() > 10 ? last.substr(0,9) + "." : last) << "|";
        cout << std::setw(10) << (nick.length() > 10 ? nick.substr(0,9) + "." : nick) << "|" << std::endl;
    }
    
    str inp = bs().input("\x1b[32m➜ Enter the index > \033[0m");
    int i = atoi(inp.c_str());
    if (not std::cin.good())
    {
        print("Invalid input\n");
        return;
    }
    if(this->contacts_count > i and i > -1)
    {
        Contact Contact = this->contacts[i];

        cout << "Index    :" << std::setw(10) << i << std::endl;
        cout << "First Name:" << std::setw(10) << Contact.get_first_name() << std::endl;
        cout << "Last Name:" << std::setw(10) << Contact.get_last_name() << std::endl;
        cout << "Nick Name:" << std::setw(10) << Contact.get_nickaname() << std::endl;
        cout << "phone number:"  << std::setw(10) << Contact.get_phone() << std::endl;
        cout << "Darkest Secret:" << std::setw(10) << Contact.get_secret() << std::endl;
    } 
    else
    {
        print("IndexError: list index out of range\n");
        return ;
    }
}