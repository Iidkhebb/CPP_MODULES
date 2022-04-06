#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook phone = PhoneBook();
    str inp;
    print("\t ---- WELCOME TO PHONEBOOK ---- \n\n\n");
    print("SUPPORTED COMMANDS:\n\n");
    print("* ADD\n* SEARCH\n* EXIT\n");
    while (true)
    {
        print("PhoneBook$ ");
        input(inp);
        if (inp is "ADD")
            phone.add();
        else if (inp is "SEARCH")
        {
            print("ENTER THE CONTACT INDEX > ");
            input(inp);
            phone.search(stoi(inp));
        }
        else if (inp is "EXIT")
            exit(0);
        else
        {
            if (not std::cin.good())
                return 0;
            print("--- UNSUPPORTED COMMAND ! ---\n");
        }
    }
    return 0;
}

