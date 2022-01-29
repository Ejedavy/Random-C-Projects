//
// Created by ejeoh on 1/29/2022.
//
#include <iostream>
#include <cstring>

namespace MyString {
#ifndef C_STRING_H
#define C_STRING_H

    class String {
    private:
        char *str;

    public:
        String();
        String(const char* s);
        String(const String& source);
        ~String();
        void displayName() const;
        int getLength() const;
        const char* getString() const;
    };

#endif //C_STRING_H

    String::String():str{nullptr}{
        str = new char[1];
        *str = '\0';
    }

    String:: String(const char* s){
        if(s == nullptr){
            str = new char[1];
            *str = '\0';
        } else{
            str = new char[std::strlen(s) + 1];
            std::strcpy(str, s);
        }
    }

    String::String(const String& source){

    }


}

