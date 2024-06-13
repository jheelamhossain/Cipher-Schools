In this lecture we have learned more about function. We have learned how the functions work.The inputs of the function are given at the start of the function.
Every function has two parts: A header and a body
The header contains return type,name , input values
The body is the parts where the function actually work. 
Every functon starts from the main function.It utilixes other functions in the main function.
We will initially start from the main function. It will go to caller function. Then return the value and return back to the main function.
Under the main function there is a caller function and a return value.

#include <iostream>
using namespace std;
void printstuff() //there are no parameters
{
	cout<<"Writing my first function";
}
int main()
{
	printstuff();
	
	return 0;
}

#include <iostream>
using namespace std;
int sum(int a,int b)
{
	int c;
	
	c=a+b;
	
	return c;
}

int main()
{
	int a,b;
	int add_sum;
	a=3;
	b=5;
	
	add_sum=sum(a,b);
	
	cout<<add_sum;
	
	return 0;
}
