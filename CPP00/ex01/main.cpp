#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "./bs/BetterSyntax.hpp"

int main(void)
{
    PhoneBook phone = PhoneBook();
    str inp;
    print("\n\n\t \x1b[32m ---- WELCOME TO PHONEBOOK ---- \033[0m \n\n");
    print("\x1b[36m SUPPORTED COMMANDS:\n");
    print("* ADD\n* SEARCH\n* EXIT\n \033[0m \n\n");
    while (true)
    {
        inp = bs().input("\x1b[32m➜ PhoneBook :\033[0m");
        if (inp is "ADD")
            phone.add();
        else if (inp is "SEARCH")
            phone.search();
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

