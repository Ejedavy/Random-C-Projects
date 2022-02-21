//
//  landlord.cpp
//  Landlord
//
//  Created by Gbrigens on 1/11/22.
//

//landlord.cpp
//models the finances for an apartment building
#include "landlord.h" //for class declarations, etc.
#include <string>

using namespace std;

//Tenant Class
int tenant::getAptNumber(){
	return aptNumber;
}
string tenant::getName(){
	return name;
}


// Tenant list class
void tenantList::insertTenant(tenant* ten){
	setPtrsTens.insert(ten);
}

int tenantList::getAptNo(const string& tenantName){
	for(auto& ten : setPtrsTens){
		if(ten->getName() == tenantName){
			return ten->getAptNumber();
		}
		else{
			continue;
		}
	}
	return -1;

}

 tenantList::~tenantList(){
         setPtrsTens.clear(); // destructor (deletes tenants)
		 delete *iter;
}

void tenantList::display(){
	for (iter = setPtrsTens.begin() ; iter!= setPtrsTens.end() ; iter++)
    {
        cout << **iter<< " ";
    }
}

//  Compare Tenants Class
bool compareTenants::operator()(tenant* lhs, tenant* rhs ) const{
		return (*lhs) == (*rhs);
}


// Tenant Input Screen
void tenantInputScreen::getTenant(){
	ptrTenantList->display();
}

//Rent Row
rentRow::rentRow(int apTnum): 	aptNo {apTnum}{
}

void rentRow::setRent(int month, float rentValue){
	rent[month] = rentValue;
}

float rentRow::getSumOfRow(){
	float total = 0;
	for(float i : rent){
		total += i;
	}
    return total;
}


//class compareRows
bool compareRows::operator()(rentRow* a , rentRow* b) const{
	bool c = ((*a) == (*b));
    return c;
}


//class rentRecord
rentRecord::~rentRecord(){
	 setPtrsRR.clear();
	 delete *iter;
}

void rentRecord::insertRent(int aptNumber, int month, float amount){
    rentRow* rr = new rentRow(aptNumber);
    rr->setRent(month, amount);
    setPtrsRR.insert(rr);
}

void rentRecord::display(){
    for(iter = setPtrsRR.begin(); iter!= setPtrsRR.end(); iter++){
        cout << *(*iter) << endl;
        cout  << "NEXT ROW" << endl;
    }
}

float rentRecord::getSumOfRents(){
    float total = 0;
    for(iter = setPtrsRR.begin(); iter!= setPtrsRR.end(); iter++){
        total += (*iter)->getSumOfRow();
    }
    return total;
}

//class expense//
