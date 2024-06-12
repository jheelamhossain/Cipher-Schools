This lecture is a continuation of lecture 9 and lecture 10.
Speciafically we have done while loop and do while loop in this lecture.
We can use for loop and while loop interchangibly. Both work the same.
We have also learned the use of break statement.
Break statement is used to break the loop.
We have also done the following codes:
#include <iostream>
using namespace std;
int main(){
	int i;
	while(i<101){
		cout<<i<<" ";
		i++;
	}
}

#include <iostream>
using namespace std;
int main(){
	int input;
	int i=100;
	cout<<"Enter a number to guess:"<<endl;
	for(i=1;i<101;i++){
		cin>>input;
		if(input==65){
			cout<<"Congrats you have guessed correct!!"<<endl;
			break;
		}
	}
}
