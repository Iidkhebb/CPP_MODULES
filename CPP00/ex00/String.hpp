#pragma once

#include <iostream>
#include <string>
#define print(s) std::cout << s
#define str std::string

class String 
{
private:
    str s;
    
public:
    String(char *s);
    int len();
    str upper();
};