#include "Harl.hpp"
#define print(x) std::cout << x <<  std::endl

Harl::Harl(void)
{

}

void Harl::debug( void )
{
    print("I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!");
}

void Harl::info( void )
{
    print("I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!");
}
void Harl::warning( void )
{
    print("I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.");
}

void Harl::error( void )
{
    print("This is unacceptable! I want to speak to the manager now.");
}

void Harl::complain(str level)
{
    
    typedef void (Harl::*array_of_pointers) (void);
    array_of_pointers array[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    str know_Levels[4] = {"debug", "info", "warning", "error"};

    for (int i = 0; i < 4; i++)
    {
        if (level == know_Levels[i])
        {
            (this->*array[i])();
            break;
        }
    }
}

Harl::~Harl(void)
{

}
