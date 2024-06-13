In this lecture we have completed the do while loop.
#include <iostream>
using namespace std;
int main()
{
	int password;
	
	cout<<"Enter the password: "<<endl;
	cin>>password;
	
	do
	{
		cin>>password;
	}
	while(password<999999);
}

#include <iostream>
using namespace std;
int main()
{
	int password;
	
	
	
	while(1)
	{
		cout<<"chocolates ";
	}
}

#include <iostream>
using namespace std;
int main()
{
	int password;
	int count=0;
	
	
	while(1)
	{
		cout<<"chocolates ";
		count++;
		
		if(count>100) break;
	}
}

#include <iostream>
using namespace std;
int main()
{
	int count=0;
	int i;
	
	for(i=0; ;i++)
	{
		cout<<i<<" ";
		if(i>100) break;
	}
	
	return 0;
}
