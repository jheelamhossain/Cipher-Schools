In this lecture we have done the following codes:

#include <iostream>
using namespace std;
int main()
{
	int a=5;
	
	int *x;
	x=&a;
	
	cout<<"The address of a , which is stored in the pointer x is "<<x<<" The value of x+1 is: "<<x+1<<endl;
	
		
	return 0;
}


#include <iostream>
using namespace std;
int main()
{
	int a[5];
	
	int *x;
	x=&a[0];
	
	int i;
	
	for(i=0;i<6;i++)
	{
		cout<<a[i]<<endl;
		
	}
	
	
		
	return 0;
}

We have seen that an integer value can be added to or subtracted from a
pointer variable
In reality, it is not the integer value which is added/subtracted, but rather the
scale factor times the value
