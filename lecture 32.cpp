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
		
};


int main()
{
	
	Car a;
	a.calculatemileage();
	a.mileage();
}

#include <iostream>

using namespace std;
//vehicle is the base class
class Vehicle
{
	public:
		int number_tyers;
		string name;
		int capacity;
		int mileage;	

		
};
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
		int number_airbags;
		int ac_consumption;
		
		public:
			void set_mileage(int mileage)
			{
				this->mileage=mileage;
			}
	
			void calculate_mileage()
		{
			cout<<"The mileage is "<<mileage;
		}
		
};


int main()
{
	
	Car a;
	a.set_mileage(50);
	a.calculate_mileage();

}
