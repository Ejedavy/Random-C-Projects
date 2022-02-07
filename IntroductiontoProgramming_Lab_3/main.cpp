#include "bits/stdc++.h"

using namespace std;

// This is a person class
class Person
private:
		string name;
		int age;
		bool alive = true;
public:
		/*In this class, since there are no attributes that are pointers so we do not  need the moving constructor and the move assignment */
		Person(string newName = "", int newAge = 1);
		
		//Destructor
		~Person();
		
		//Copy Constructor
		
		
		/*  These are the general methods of the class Person  */
		void celebrateBirthday();
		
		//Operator overloading
		Person operator-  ();
		
		//Copy Assignment 
		Person & operator =(const Person& rhs);

};

// This is the default contrcutor using the list constructor
Person::Person(string newName, int newAge):name{newName},age{newAge}{
	 cout << "The constructor for person has been called" << endl;
	}

// Desruction 
Person::~	Person(){
	cout << "The destructor for the class has been called" << endl;
}

/*General member methods implementation*/
void Person::celebrateBirthday (){
	cout << "One year has been added to your age " << endl;
	this -> age ++;
}

/*Operator overloading*/
Person Person::operator-(){
			Person* temp = new Person{this -> name, this -> age};
			temp -> alive = false;
			return (*temp);
}

// Copy Assignment
Person& Person::operator=(const &rhs){
	this -> name = rhs.name;
	this -> age = rhs.age;
	return (*this);
}



//This function prints a pyramid of a  given depth
void printPyramid(){
	int n;
	cout << "Enter the heigth of the pyramid:  ";
	cin >> n;
	for(int i = 1; i < n; i++){
		for(int j =0; j < n-i; j++){
			cout << " ";
		}
		
		for(int j = 0; j<2*i; j++){
			cout << "*";
		}
		
		for(int j =0; j < n-i; j++){
			cout << " " ;
		}
		cout << "\n";
		
	}
}


// This function takes in a range and returns the fibonaicci numbers within that range
int fib(){
	int startRange , endRange;
	cout << "Enter the start range: ";
	cin >> startRange ;
	
	cout << "Enter the end range: ";
	cin>> endRange;
	
	if( (startRange > endRange) || (startRange < 0) ||  (endRange <0)) {
		throw std::invalid_argument("Your entry is invalid");
	}
	else{
	int dp[endRange + 1];
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 1;
	
	for(int i = 3; i < endRange+1; i++ ){
		dp[i] = dp[i-1] + dp[i-2];
	}
	
	for(int i = startRange; i <= endRange; i++){
		cout << dp[i] << " " ;
	}
	return 0;
	}
}

/* Driver function */
int main(int argc, char **argv)
{
	return 0;
}
