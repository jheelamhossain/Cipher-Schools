In this lecture we have learned the following things:
How indexing of array is done in cpp.
Index is always an integer
Each individual element of an array is of same datatype
The elements are stored consecutively and not in a random order.
#include <iostream>
using namespace std;
int main(){
	int a[4];
	cout<<"Give 5 integers as input"<<endl;
	
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	cout<<"The 5 given inputs are: "<<endl;
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
}
