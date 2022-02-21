//
//  main.cpp
//  Landlord
//
//  Created by Gbrigens on 1/11/22.
//
#include <iostream>
#include "landlord.h"

bool operator < (const tenant&a, const tenant&b){
    return a.aptNumber < b.aptNumber;
}
bool operator == (const tenant& a, const tenant& b){
    return a.name == b. name;
}

ostream& operator << (ostream& os, const tenant& tenant){
    os << "Apartment: " << tenant.aptNumber << "has the tenant " << tenant.name;
    return os;
}

bool operator < (const rentRow& a, const rentRow& b){
    bool c = a.aptNo < b.aptNo;
    return c;
}

bool operator == (const rentRow& a, const rentRow& b){
    return a.aptNo == b.aptNo;
}


ostream& operator << (ostream& os, const rentRow& a){
    os << "Apartment Number: " << a.aptNo << endl;
    os << ">>>>>>>>>>><<<<<<<<<<<<<<" << endl;
    for(float i : a.rent){
        os << "The rent paid from January to December: " << i << " ";
    }
    return os;
}
int main() {
    userInterface theUserInterface;
    theUserInterface.interact();
    return 0;
}
