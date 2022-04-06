#include "Contact.hpp"
#include "PhoneBook.hpp"

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

void PhoneBook::search(int i)
{
    Contact Contact = this->contacts[i];
    if(this->contacts_count == 0 or i > this->contacts_count or i < 0)
    {
        print("IndexError: list index out of range\n");
        return ;
    } 
    std::cout << "Contact Index : " << i << std::endl;
    std::cout << "First Name : " << Contact.get_first_name() << std::endl;
    std::cout << "Last Name : " << Contact.get_last_name() << std::endl;
    std::cout << "Nick Name : " << Contact.get_nickaname() << std::endl;
}