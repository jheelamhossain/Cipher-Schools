Access Specifiers help to control visibility of data members and methods of a
class
The private access specifier can be used to hide information about the
implementation detals ot the data members and methods
Got Set rncthods are dotned to provide an intertacc tc use and access the
Cata members
#include <iostream>
#include <string>
using namespace std;

class Student
{
	public:
	
	string name;
	int attendance;
	float total_marks;
	
	void calculate_percentage()
	{
		cout<<total_marks<<"%";
		
	}
};
int main()
{
	Student a,b,c;
	a.name="Rohit";
	a.attendance=90;
	a.total_marks=69;
	
	a.calculate_percentage();
	
	return 0;
}



#include <iostream>
#include <string>
using namespace std;

class Student
{
	public:
	
	string name;
	int attendance;
	float total_marks;
	
	void calculate_percentage()
	{
		cout<<total_marks<<"%";
		
	}
};
class client
{
	public:
	string name;
	int credit_number;
	int cvv;
	int user_name;
	string password;
	
};
int main()
{
	client a,b,c;
	a.name="Rohit";
	a.password="EnjoyC++";
	a.cvv=611;
	a.credit_number=123456789;
	
	cout<<"The password of Rohit is: "<<a.password;
	
	return 0;
}



#include <iostream>
#include <string>
using namespace std;

class Student
{
	public:
	
	string name;
	int attendance;
	float total_marks;
	
	void calculate_percentage()
	{
		cout<<total_marks<<"%";
		
	}
};
class client
{
	private:
	int credit_number;
	int cvv;
	string password;
	public:
	
	int user_name;
	string name;
	
	void set_credit_card_number(int number)
	{
		credit_number=number;
	}
	void get_creditcardnumber()
	{
		cout<<"The credit card number is "<<credit_number;
		return credit_number;
	}
	void set_allthestuffatonce(int number,int name,int pass)
	{
		credit_number=num;
		name=name;
		password=pass;
	}
};
int main()
{
	
}






