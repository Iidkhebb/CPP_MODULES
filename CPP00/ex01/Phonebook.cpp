#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iomanip>
#include <string>

PhoneBook::PhoneBook()
{
    this->contacts_count = 0;
}

void PhoneBook::add()
{
    str First_Name;
    str Last_Name;
    str Nick_Name;
    str Phone_Number;
    str Darkest_Secret;

    print("ENTER YOUR FIRST NAME >");
    input(First_Name);
    print("ENTER YOUR LAST NAME >");
    input(Last_Name);
    print("ENTER YOUR Nick Name >");
    input(Nick_Name);
    print("ENTER YOUR Phone Number >");
    input(Phone_Number);
    print("ENTER YOUR Darkest Secret >");
    input(Darkest_Secret);
    Contact Contact(First_Name, Last_Name, Nick_Name, Phone_Number, Darkest_Secret);
    this->contacts[contacts_count++ % 8] = Contact;
}

void PhoneBook::search()
{
    std::cout << std::setw(11) << "   Index  ";
    std::cout << std::setw(11) << "First Name ";
    std::cout << std::setw(11) << "Last Name ";
    std::cout << std::setw(11) << " Nick Name " << std::endl;
    for (int y = 0; y < this->contacts_count; y++)
    {
        Contact Contact = this->contacts[y];
        str fisrt = Contact.get_first_name();
        str last = Contact.get_last_name();
        str nick = Contact.get_nickaname();
        std::cout << std::setw(10) << y << "|";
        std::cout << std::setw(10) << (fisrt.length() > 10 ? fisrt.substr(0,9) +"." : fisrt) << "|";
        std::cout << std::setw(10) << (last.length() > 10 ? last.substr(0,9) + "." : last) << "|";
        std::cout << std::setw(10) << (nick.length() > 10 ? nick.substr(0,9) + "." : nick) << "|" << std::endl;
    }
    
    print("\x1b[32m➜ Enter the index > \033[0m");
    str inp;
    input(inp);
    int i = stoi(inp);
    if(this->contacts_count > i and i > -1)
    {
        Contact Contact = this->contacts[i];

        std::cout << "Index    :" << std::setw(10) << i << std::endl;
        std::cout << "First Name:" << std::setw(10) << Contact.get_first_name() << std::endl;
        std::cout << "Last Name:" << std::setw(10) << Contact.get_last_name() << std::endl;
        std::cout << "Nick Name:" << std::setw(10) << Contact.get_nickaname() << std::endl;
        std::cout << "phone number:"  << std::setw(10) << Contact.get_phone() << std::endl;
        std::cout << "Darkest Secret:" << std::setw(10) << Contact.get_secret() << std::endl;
    } 
    else
    {
        print("IndexError: list index out of range\n");
        return ;
    }
}