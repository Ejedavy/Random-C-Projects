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
        String& operator=(const String& rhs);
        String& operator=(String&& rhs);
    };

#endif //C_STRING_H

    //DEFAULT CONSTRUCTOR
    String::String():str{nullptr}{
        str = new char[1];
        *str = '\0';
    }

    //THE CONSTRUCTOR OVERLOAD WITH ONE ARGUMENT
    String:: String(const char* s){
        if(s == nullptr){
            str = new char[1];
            *str = '\0';
        } else{
            str = new char[std::strlen(s) + 1];
            std::strcpy(str, s);
        }
    }

    //THIS IS THE COPY CONSTRUCTOR OF THE STRING CLASS
    String::String(const String& source):str{nullptr}{
        str = new char[strlen(source.str) + 1];
        std::strcpy(newString,source.str);
    }

    //DESTRUCTOR
    String::~String(){
        delete[] str;
    }

    //DISPLAY METHOD
    void String::displayName() const {
        std::cout << str << ":" << getLength() << std::endl;
    }

    //Length Getter
    int String::getLength() const {
        return std::strlen(str);
    }

    //String Getter
    const char* String::getString() const {
        return str;
    }

    //OVERLOADING THE ASSIGNMENT OPERATOR (COPY ASSIGNMENT)
    String& String::operator=(const String &rhs) {
        if(this == &rhs){
            return *this;
        }else{
            delete[] str;
            str = new char[std::strlen(rhs) +1];
            std::strcpy(str,rhs);
            return *this;
        }
    }

    //OVERLOADING THE ASSIGNMENT OPERATOR ( MOVE ASSIGNMENT ) **FOR LITERALS AND R-TYPE VALUES**
    String& String::operator=(String&& rhs){
        if(this == &rhs){
            return *this;
        }else{
            delete [] str;
            str = rhs.str;
            rhs.str = nullptr;
            return *this;
        }
    }
}

