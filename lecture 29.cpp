
#include <iostream>
#include <string>
using namespace std;

class Bank_client
{
	public:
	
	string name;
	int attendance;
	float total_marks;
	string password;
	string user_name;
	
	public:
		string name;
	
	void set_credit_card_number(int credit_number)
	{
		credit_name=number;
		this->credit_number=credit_number;
		cout<<"The address of the object calling this function is "<<this;
	}
	int get_creditcardnumber()
	{
		cout<<"The credit card number is "<<credit_card;
		return credit_number;
	}
	void set_alltthestuffatonce(int credit_number, int name,int password)
	{
		this->credit_number=credit_number;
		this->name=name;
		this->password=password;
	}
};

int main()
{
	Bank_client a,b,c;
	
	a.name="rohit";
	a.set_credit_card_number(983593);
	a.get_creditcardnumber();
	
	a.credit_number;
	
	return 0;
}



#include <iostream>
#include <string>
using namespace std;

class Bank_client
{
	public:
	
	string name;
	int attendance;
	float total_marks;
	string password;
	string user_name;
	
	public:
		string name;
	
	void set_credit_card_number(int credit_number)
	{
		credit_name=number;
		this->credit_number=credit_number;
		cout<<"The address of the object calling this function is "<<this<<endl;
	}
	int get_creditcardnumber()
	{
		cout<<"The credit card number is "<<credit_card;
		return credit_number;
	}
	void set_alltthestuffatonce(int credit_number, int name,int password)
	{
		this->credit_number=credit_number;
		this->name=name;
		this->password=password;
	}
};

int main()
{
	Bank_client a,b,c;
	
	a.name="rohit";
	a.set_credit_card_number(983593);
	cout<<"The address of this object is "<<&a<<endl;
	
	return 0;
}


