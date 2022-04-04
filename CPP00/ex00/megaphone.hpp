#pragma once

#include <iostream>
#include <string>

#define print(s) std::cout << s

class String 
{
private:
    std::string s;
    
public:
    String(char *s) { this->s = s; }
    
    int len(){ return this->s.length();}
    
    std::string upper() 
    {
        for (int i = 0; i < this->len(); i++)
            s[i] = (char) toupper(s.at(i));
        return s;
    }
};