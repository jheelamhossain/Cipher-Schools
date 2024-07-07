#include<iostream>
using namespace std;
int main(){
	string text;
	text = "hi guys how are you doing today, did you get time to watch the new spiderverse film and now i want you to find the letter with maximum frequency in this sentence";
	
	//	cout<<text[0]<<endl;
	//	cout<<text[1]<<endl;
	//	cout<<text[2]<<endl;
	//	cout<<text[3]<<endl;
	
	//to store all freq i will first define array of size 26
	int freq[26]; 
	
	int i;
	for(i=0;i<26;i++) freq[i]=0;
	
	for(i=0;i<text.length();i++){
		if(text[i] != ' '){
			freq[text[i]-'a']++;
			//we are finding the index of which we have to increment directly from the value of text[i]-'a'	
		}
	}
	
	char temp;
	int max;
	for(i=0,temp='a',max=0;i<26;i++){
		cout<<"The frequency of the char  "<<temp<<" is "<<freq[i]<<endl;
		temp++;
		
		if(freq[i] > max) max=freq[i];
	}
	
	cout<<"The max freq is: "<<max;
	return 0;
}
