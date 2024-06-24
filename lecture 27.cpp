
#include <iostream>
using namespace std;

int main()
{
	string name;
	cin>>name;
	
	int i;
	for(i=0;i<5;i++)
	{
		cout<<name[i];
	}
}



#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a,b;
	
	cin>>a>>b;
	
	cout<<"The strings which you have given as input are "<<a<<" "<<b;
	
}


#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a,b;
	
	cin>>a>>b;
	
	cout<<"The strings which you have given as input are "<<a<<" "<<b<<endl;
	
	
	string c;
	c=a+b;
	cout<<"The combined word is: "<<c;
	
	return 0;
	
}


#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a,b,c;
	
	cin>>a>>b;
	
	cout<<"The strings which you have given as input are "<<a<<" "<<b<<endl;
	
	
	
	c=a+b;
	cout<<"The combined word is: "<<c;
	
	return 0;
	
}


#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a,b,c;
	
	cin>>a>>b;
	
	cout<<"The strings which you have given as input are "<<a<<" "<<b<<endl;
	
	
	
	c=a+b;
	cout<<"The combined word is: "<<c;
	cout<<"The length of the combined word is: "<<c.length()<<endl;
	
	return 0;
	
}


#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a;
	string b;
	string c;
	
	getline(cin,a);
	
	cout<<"Your full name is : "<<a<<endl;
	
	return 0;
	
}

