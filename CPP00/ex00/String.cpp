#include "String.hpp"

str String::upper() {
        for (int i = 0; i < this->len(); i++)
            this->s[i] = (char) toupper(this->s.at(i));
        return this->s;
}

int String::len() {
    return this->s.length();
}

String::String(char *s) {
    this->s = s;
}