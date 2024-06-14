This lecture is a continuation of functions topic:
A single return value does not imply a single return value.

int compare(int a,int b){
	int c;
	if(a>b)
	{
		c=a;
	}
	else
	{
		c=b;
	}
	
	return c;
}

#include <iostream>
using namespace std;
int compare(int a,int b)
{
	if(a==5)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
