This lecture is the continuation of lecture 21 in which we have started learning about pointers.
Once a pointer has been assigned the address of a variable, the value of the variable can be accessed using the indirection operator (*).
int a, b;
int *p;
Declaring a pointer just allocates space to hold the pointer it does not allocate something to be pointed to!
After declaring a pointer:
int *ptr;
ptr doesn't actually point to anything yet.
We can either :
a) make it point to something that already exists, or allocate room in memory for
b) something new that it will point to... (dynamic allocation, to be done later)


#include <iostream>
using namespace std;
int main()
{
	int a;
	int *p;
	
	p=&a;
	
	a=1;
	cout<<"The value of a is(from the actual variable type)"<<a<<endl;
	cout<<"The value of a from the pointer using *(asterisk/indirection operator)"<<*p<<endl;
	
	return 0;
}


#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
	
	int *p;
	int *q;
	int c;
	
	p=&a;
	q=&b;
	
	a=2;
	b=5;
	c=*p+*q;
	
	cout<<"The value of c is: "<<c<<endl;
	
	return 0;
}

Pointer variables must always point to a data item of the same type
Never assign an absolute address to a pointer variable
Whenever you use *p to access the value of the location pointed to by a
pointer variable p, always check that p has been assigned a valid value
before by an assignment statement ( p = .....)


#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
	
	int *p;
	int *q;
	int c;
	
	p=&a;
	q=&b;
	
	a=2;
	b=5;
	c=*p+*q;
	
	cout<<"The value of c is: "<<c<<endl;
	cout<<"The address of a is "<<&a<<"The value of the pointer is "<<p;
		
	return 0;
}
