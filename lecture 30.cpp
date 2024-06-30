#include<iostream>
using namespace std;

class Complex
{
	private:
		float real;
		float img;
	
	public:	
		
		void set_parameters(int real,int img)
		{
			this->real=real;
			this->img=img;
		}
		void SqdistancefromOrigin()
		{
			float dist;
			
			dist=real*real+img*img;
			
			cout<<"The distance from origin is "<<dist;
			
			return;
		}
};
int main()
{
	Complex a,b;
	
	a.set_parameters(3,4);
	
	
	a.SqdistancefromOrigin();
	
	return 0;
	
}


#include<iostream>
using namespace std;

class Complex
{
	private:
		float real;
		float img;
	
	public:	
		
		void set_parameters(int real,int img)
		{
			this->real=real;
			this->img=img;
		}
		void SqdistancefromOrigin()
		{
			float dist;
			
			dist=real*real+img*img;
			
			cout<<"The distance from origin is "<<dist;
			
			return;
		}
};

class New_account
{
	public:
		
		int amount;
		int days;
		
		void initial()
		{
			amount=0;
			days=0;
		}
}
int main()
{
	New_account a;
	
	a.initial();
	 
	 
	
	return 0;
	
}


#include<iostream>
using namespace std;

class Complex
{
	private:
		float real;
		float img;
	
	public:	
		
		void set_parameters(int real,int img)
		{
			this->real=real;
			this->img=img;
		}
		void SqdistancefromOrigin()
		{
			float dist;
			
			dist=real*real+img*img;
			
			cout<<"The distance from origin is "<<dist;
			
			return;
		}
};

class New_account
{
	public:
		
		int amount;
		int days;
		
		void initial()
		{
			amount=0;
			days=0;
		}
};
class motorbike
{
	public:
		int num_wheels;
		int lights;
}
int main()
{
	New_account a;
	
	a.initial();
	
	a.amount++;
	a.days++;
	 
	 
	
	return 0;
	
}


#include<iostream>
using namespace std;

class Complex
{
	private:
		float real;
		float img;
	
	public:	
		
		void set_parameters(int real,int img)
		{
			this->real=real;
			this->img=img;
		}
		void SqdistancefromOrigin()
		{
			float dist;
			
			dist=real*real+img*img;
			
			cout<<"The distance from origin is "<<dist;
			
			return;
		}
};

class New_account
{
	public:
		
		int amount;
		int days;
		
		New_account()
		{
			amount=0;
			day=0;
			
			cout<<"The constructor is called now";
		}
		
		
};
class motorbike
{
	public:
		int num_wheels;
		int lights;
}
int main()
{
	New_account a;
	
	
	return 0;
	
}


#include<iostream>
using namespace std;

class Complex
{
	private:
		float real;
		float img;
	
	public:	
		
		void set_parameters(int real,int img)
		{
			this->real=real;
			this->img=img;
		}
		void SqdistancefromOrigin()
		{
			float dist;
			
			dist=real*real+img*img;
			
			cout<<"The distance from origin is "<<dist;
			
			return;
		}
};

class New_account
{
	public:
		
		int amount;
		int days;
		
		New_account()
		{
			amount=0;
			day=0;
			
			cout<<"The constructor is called now";
		}
		
		
};
class motorbike
{
	public:
		int num_wheels;
		int lights;
}
int main()
{
	New_account a;
	New_account b;
	
	
	return 0;
	
}

#include<iostream>
using namespace std;

class Complex
{
	private:
		float real;
		float img;
	
	public:	
		
		void set_parameters(int real,int img)
		{
			this->real=real;
			this->img=img;
		}
		void SqdistancefromOrigin()
		{
			float dist;
			
			dist=real*real+img*img;
			
			cout<<"The distance from origin is "<<dist;
			
			return;
		}
};

class New_account
{
	public:
		
		int amount;
		int days;
		
		New_account()
		{
			amount=0;
			day=0;
			
			cout<<"The constructor is called now";
		}
		
		~New_account()
		{
			cout<<"Now the use of the object is complete and The object is getting destroyed";
		}
		
};
class motorbike
{
	public:
		int num_wheels;
		int lights;
}
int main()
{
	New_account a;
	New_account b;
	
	
	return 0;
	
}

#include<iostream>
using namespace std;

class Complex
{
	private:
		float real;
		float img;
	
	public:	
		
		void set_parameters(int real,int img)
		{
			this->real=real;
			this->img=img;
		}
		void SqdistancefromOrigin()
		{
			float dist;
			
			dist=real*real+img*img;
			
			cout<<"The distance from origin is "<<dist;
			
			return;
		}
};

class New_account
{
	public:
		
		int amount;
		int days;
		
		New_account()
		{
			amount=0;
			day=0;
			
			cout<<"The constructor is called now";
		}
		
		~New_account()
		{
			cout<<"Now the use of the object is complete and The object is getting destroyed";
		}
		
};
class motorbike
{
	public:
		int num_wheels;
		int lights;
}
int main()
{
	New_account a;
	New_account b;
	
	
	cout<<endl<<"Here all the functions and calculations take place"<<endl;
	
	return 0;
	
}

#include<iostream>
using namespace std;

class Complex
{
	private:
		float real;
		float img;
	
	public:	
		
		void set_parameters(int real,int img)
		{
			this->real=real;
			this->img=img;
		}
		void SqdistancefromOrigin()
		{
			float dist;
			
			dist=real*real+img*img;
			
			cout<<"The distance from origin is "<<dist;
			
			return;
		}
};

class New_account
{
	public:
		
		int amount;
		int days;
		
		New_account(int amount_initial, int days_initial)
		{
			amount=amount_initial;
			day=days_initial;
			
			cout<<"The constructor is called now";
		}
		void print_account_details()
		{
			cout<<"The amount is"<<amount;
			cout<<"The number of days"<<days<<endl;
		}
		~New_account()
		{
			cout<<"Now the use of the object is complete and The object is getting destroyed";
		}
		
};
class motorbike
{
	public:
		int num_wheels;
		int lights;
}
int main()
{
	New_account a(0,0);
	
	a.print_account_details();
	New_account b(100,20);
	
	b.print_account_details();
	cout<<endl<<"Here all the functions and calculations take place"<<endl;
	
	return 0;
	
}


#include<iostream>
using namespace std;

class Complex
{
	private:
		float real;
		float img;
	
	public:	
		Complex(int real_value, int img_value)
		{
			real=real_value;
			img=img_value;
		}
		void set_parameters(int real,int img)
		{
			this->real=real;
			this->img=img;
		}
		void SqdistancefromOrigin()
		{
			float dist;
			
			dist=real*real+img*img;
			
			cout<<"The distance from origin is "<<dist;
			
			return;
		}
};

class New_account
{
	public:
		
		int amount;
		int days;
		
		New_account(int amount_initial, int days_initial)
		{
			amount=amount_initial;
			day=days_initial;
			
			cout<<"The constructor is called now";
		}
		void print_account_details()
		{
			cout<<"The amount is"<<amount;
			cout<<"The number of days"<<days<<endl;
		}
		~New_account()
		{
			cout<<"Now the use of the object is complete and The object is getting destroyed";
		}
		
};
class motorbike
{
	public:
		int num_wheels;
		int lights;
}
int main()
{
	New_account a(0,0);
	
	a.print_account_details();
	New_account b(100,20);
	
	b.print_account_details();
	cout<<endl<<"Here all the functions and calculations take place"<<endl;
	
	Complex(3,3);
	Complex(3,5);
	
	return 0;
	
}


If no destructor is provided by the user, the compiler supplies a free default
destructor
Compiler-provided (free default) destructor has no code in its body
Called at the end, After the use of the object in the code is complete
By default does nothing, Used to free the allocated space
