In this lecture we have done the following :
a) We have learned about conditional statements using if-else and switch case.
b) #include <iostream>
using namespace std;
int main(){
	float a,b;
	cin>>a>>b;
	
	if(a>0.01){
		cout<<"The condition in if statement is correct";
	}
}
c) #include <iostream>
using namespace std;
int main(){
	float a,b;
	cout<<"Enter two floating point numbers as input"<<endl;
	cin>>a>>b;
	
	if(a>0.01 && b>a){
		cout<<"The condition in if statement is correct";
	}
}
d)#include <iostream>
using namespace std;
int main(){
	float a,b;
	cout<<"Enter two floating point numbers as input"<<endl;
	cin>>a>>b;
	
	if(a>0.01 || b>a){
		cout<<"The condition in if statement is correct";
	}
}
e) #include <iostream>
using namespace std;
int main(){
	int marks;
	cout<<"Student please enter the marks: "<<endl;
	cin>>marks;
	
	if(marks>90){
		cout<<"A";
	}
	if(marks<90 && marks>80){
		cout<<"B";
	}
	if(marks<80 && marks>70){
		cout<<"C";
	}
	if(marks<70){
		cout<<"PASS";
	}
}
f)#include <iostream>
using namespace std;
int main(){
	int marks;
	cout<<"Student please enter the marks: "<<endl;
	cin>>marks;
	
	if(marks>90){
		cout<<"A";
	}
	else if(marks<90 && marks>80){
		cout<<"B";
	}
	else if(marks<80 && marks>70){
		cout<<"C";
	}
	else if(marks<70){
		cout<<"PASS";
	}
}
g) #include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter an integer:"<<endl;
	
	cin>>a;
	
	switch(a)
	{
		case 1:
			cout<<"The value of a is 1";
			break;
		case 2:
			cout<<"The value of a is 2";
			break;
		default:
			cout<<"default is always printed";	
	}
}
h)#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter an integer:"<<endl;
	
	cin>>a;
	
	switch(a)
	{
		case 1:
			cout<<"The value of a is 1";
			break;
		case 2:
			cout<<"The value of a is 2";
			break;
		case 3:
			cout<<"The value of a is 3";
			break;	
		default:
			cout<<"default is always printed";	
			break;
	}
}
