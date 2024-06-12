This lecture in continuation of lecture 9. Here also we are talking about loops.
Before that we have done the following codes.
#include <iostream>
using namespace std;
int main(){
	int i;
	i=1;
	cout<<i++<<endl;
	cout<<i;
}

#include <iostream>
using namespace std;
int main(){
	int i;
	i=1;
	cout<<++i<<endl;
	cout<<i;
}

#include <iostream>
using namespace std;
int main(){
	int i;
	int j;
	int k;
	i=0;
	j=0;
	k=0;
	
	cout<<i<<" "<<j<<" "<<k<<" "<<endl;

	j=i++;
	
	
	cout<<i<<" "<<j<<" "<<k<<" "<<endl;
	
	k=++i;
	
	
	cout<<i<<" "<<j<<" "<<k<<" "<<endl;
	
	
}

#include <iostream>
using namespace std;
int main(){
	int i;
	for(i=1;i<101;i++){
		cout<<i<<" "<<endl;
	}
}
