#include "Harl.hpp"
#define print(x) std::cout << x <<  std::endl

Harl::Harl(void)
{

}

void Harl::debug( void )
{
    print("[ DEBUG ]");
    print("I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!");
}

void Harl::info( void )
{
    print("[ INFO ]");
    print("I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!");
}
void Harl::warning( void )
{
    print("[ WARNING ]");
    print("I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.");
}

void Harl::error( void )
{
    print("[ ERROR ]");
    print("This is unacceptable! I want to speak to the manager now.");
}

void Harl::filter(str level)
{
    typedef void(Harl::*members_function_type)(void);
    members_function_type members_function_pointers_array[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    str know_Levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;
    for (i = 0; know_Levels[i] != level && i < 4; i++);
    switch (i)
    {
        case 0:
            (this->*members_function_pointers_array[i++])();
        case 1:
            (this->*members_function_pointers_array[i++])();
        case 2:
            (this->*members_function_pointers_array[i++])();
        case 3:
            (this->*members_function_pointers_array[i++])();         
            break;
        default:
            print("[ Probably complaining about insignificant problems ]");
            break;
    }
}

Harl::~Harl(void)
{

}