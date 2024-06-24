
#include <iostream>
using namespace std;

int main()
{
	char r,o,h,i,t;
	cin>>r>>o>>h>>i>>t;
	
	cout<<"The name you just entered is "<<r<<o<<h<<i<<t;
	
}


#include <iostream>
using namespace std;

int main()
{
	char name[7];
	
	for(int i=0;i<7;i++)
	{
		cin>>name[i];
	}
	
	cout<<"The name you have just entered is : "<<endl;
	for(int i=0;i<7;i++)
	{
		cout<<name[i]<<endl;
	}
}


#include <iostream>
using namespace std;

int main()
{
	char name[1000];
	cout<<"Enter your name : (Note: Enter # after the end of your name"<<endl;
	
	
	int i;
	while(name[i]!='#')
	{
		cin>>name[i];
		i++;
	}
	
	cout<<"The name you have just entered is "<<endl;
	while(name[i]!='#')
	{
		cout<<name[i];
	}
}


#include <iostream>
using namespace std;

int main()
{
	char name[1000];
	cout<<"Enter your name : (Note: Enter # after the end of your name"<<endl;
	
	
	int i=0;
	while(1)
	{
		if(name[i]=='#') break;
		
		
		i++;
	}
	i=0;
	cout<<"The name you have just entered is "<<endl;
	while(name[i]!='#')
	{
		cout<<name[i];
		i++;
	}
}

