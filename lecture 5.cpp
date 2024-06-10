In this lecture we have learned about Conditional statements. Our mentore tells us how to handle multiple conditional statements,importance of Boolean algebra.
AND: &&
OR: ||  
  We have also done the following codes:
1)
#include <iostream>
using namespace std;
int main(){
	int a,b;
	
	cout<<"Input 2 integers a and b"<<endl;
	
	cin>>a;
	cin>>b;
	//Statement: a>b
	cout<<(a>b);
	
	// cpp interprets true as 1
	//cpp interprets false as 0
}
2)
#include <iostream>
using namespace std;
int main(){
	int a,b;
	int c,d;
	cout<<"Input 4 integers a,b,c and d"<<endl;
	
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	//Statement: a>b
	cout<<(a>b && c>d);
	
	// cpp interprets true as 1
	//cpp interprets false as 0
}
