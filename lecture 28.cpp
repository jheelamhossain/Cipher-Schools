
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


