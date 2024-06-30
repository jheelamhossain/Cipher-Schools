Object-Oriented Programming (OOP) is a programming paradigm that
organizes code around objects, which represent real-world entities.
C++ is a popular programming language that supports OOP, allowing for the
creation of modular and reusable code.
This presentation will cover the fundamental concepts of OOP in C++,
including Inheritance, Polymorphism, Encapsulation, and Abstraction.

Encapsulation is the bundling of data and methods (functions) into a single
unit called a class.
Access specifiers control the visibility and accessibility of class members:
public, private, and protected.
Private members are only accessible within the class, while public members
can be accessed from outside the class.
Encapsulation helps achieve data hiding, abstraction, and modular design,
enhancing code maintainability and security.

#include <iostream>

using namespace std;


class Student
{
	private:
		
		
		int marks;
		int attendance;
		string name;
		
	public:
		void displaymarks()
		{
			cout<<marks;
			
		}
};

int main()
{
	int marks;
	int attendance;
	string name;
	
}

#include <iostream>

using namespace std;
//vehicle is the base class
class Vehicle
{
	private:
		int number_tyers;
		string name;
		int capacity;
		int mileage;	
		public:
			void calculate_mileage()
		{
			cout<<"The mileage is "<<mileage;
		}
		
}
class School_bus: public Vehicle
{
	private:
		int number_tyers;
		string name;
		int capacity;
		int mileage;
	string school_name;
	
	int number_holidays;
	
	public:
		void calculate_mileage()
		{
			cout<<"The mileage is "<<mileage;
		}
		void printnameofschool()
		{
			cout<<"The name of the school is "<<name;
			
		}
};

class Car:public Vehicle
{
	private:
		int number_tyers;
		string name;
		int capacity;
		int mileage;
		
		int number_airbags;
		int ac_consumption;
		
		
		public:
			void calculate_mileage()
		{
			cout<<"The mileage is "<<mileage;
		}
		
}


int main()
{
	
	Car a;
	a.calculatemileage();
	a.mileage();
}
