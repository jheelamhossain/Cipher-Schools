Int his lecture we have gotten intorduction to pinters.
A pointer is a variable that holda the adress of another variable.
Each elemnt requires memory
& - address
When you know the address of the element you can find the element
it can only store the address(rather than the value) of a data item

#include <iostream>
using namepsace std;
int main()
{
	int a;
	
	cout<<"The address of a is"<<&a;
	
	return 0;
}


#include <iostream>
using namespace std;
int main()
{
	int a;
	float b;
	
	cout<<"The address of a is"<<&a;
	cout<<"The address of b is"<<&b;
	return 0;
}

Usage of pointers:
Enables us to access a variable that is defined outside the function
Can be used to pass information back and forth between a function and its
reference point
More efficient in handling data tables
Reduces the length and complexity of a program
Sometimes also increases the execution speed

