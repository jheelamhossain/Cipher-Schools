#include <iostream>

using namespace std;

int main()
{
	int a[10];
	int i;
	cout<<"Enter the elements you want to sort";
	for(i=0;i<10;i++)
	{
		cin>>i;
	}
	
	int temp;
	for(i=0;i<10;i++)
	{
		if(a[i+1]<a[i])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
}

#include <iostream>

using namespace std;

int main()
{
	int a[10];
	int i;
	cout<<"Enter the elements you want to sort";
	for(i=0;i<10;i++)
	{
		cin>>i;
	}
	int j;
	for(j=0;j<9;j++)
	{
		int temp;
		for(i=0;i<10;i++)
		{
			if(a[i+1]<a[i])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}	
	}
	
}


