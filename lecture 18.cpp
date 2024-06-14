This lecture is also a continuation of the topic of Functions:
In this lecture we have learned about the parameters we pass inside the function.
#include <iostream>
using namespace std;
void PrintHi()
{
	cout<<"HI"<<endl;
	
	return ;
}
int sum(int a,int b)
{
	int c;
	
	c=a+b;
	a=500;
	
	cout<<"The value of c is "<<c<<endl;
	
	return c;
}
void swap(int a,int b)
{
	int c;
	
	c=a;
	a=b;
	b=c;
	
	cout<<"The values of a and b after swapping are: "<<a<<" "<<b<<endl;
	
	return;
}
int main()
{
	PrintHi();
	
	int a,b;
	int c;
	
	a=4;
	b=6;
	c=75;
	
	int d;
	d=sum(a,b);
	swap(a,b);
	
	cout<<"The value of c is "<<c<<endl;
	cout<<"The values of a and b after swapping are: "<<a<<" "<<b<<endl;
	
	
	return c;
}

#include <iostream>
using namespace std;
void PrintHi()
{
	cout<<"HI"<<endl;
	
	return ;
}
int sum(int a,int b)
{
	int c;
	
	c=a+b;
	a=500;
	
	cout<<"The value of c is "<<c<<endl;
	
	return c;
}
void swap(int &a,int &b)
{
	int c;
	
	c=a;
	a=b;
	b=c;
	
	cout<<"The values of a and b after swapping are: "<<a<<" "<<b<<endl;
	
	return;
}
int funn(int &a,int &b)
{
	a=99999;
	b=99999;
	
	cout<<"The values of a and b inside the function are: "<<a<<" "<<b<<endl;
}
int main()
{
	PrintHi();
	
	int a,b;
	int c;
	
	a=4;
	b=6;
	c=75;
	
	int d;
	d=sum(a,b);
	swap(a,b);
	
	cout<<"The value of c is "<<c<<endl;
	cout<<"The values of a and b after swapping are: "<<a<<" "<<b<<endl;
	cout<<"The values of a and b inside the function are: "<<a<<" "<<b<<endl;

	
	return c;
}
  
