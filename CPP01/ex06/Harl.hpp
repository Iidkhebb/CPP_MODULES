#pragma once
#include <iostream>
#include <string>
#define str std::string

class Harl 
{
public:
    Harl(void);
    void filter(str level);
    ~Harl(void);
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
};
