
#include <iostream>
using namespace std;
void swap(int *x,int *y)
{
	int c;
	
	c=*x;
	*x=*y;
	*y=c;
	
	cout<<"The swapping is completed"<<endl;
	
}
int main()
{
	int a,b;
	a=3;
	b=4;
	
	swap(&a,&b);
	
	cout<<"The values of a and b are swapped: "<<a<<" "<<b;
	
	return 0;
}


#include <iostream>
using namespace std;
void swap(int *x,int *y)
{
	int c;
	
	c=*x;
	*x=*y;
	*y=c;
	
	cout<<"The swapping is completed"<<endl;
	
}
int main()
{
	int a[10];
	
	cout<<"Values for comparision: "<<endl;
	
	cout<<"The value of a is "<<a<<endl;
	cout<<"The value of address a[0] is "<<&a[0]<<endl;
	cout<<"The value of adress a[1] is "<<&a[1]<<endl;
}

