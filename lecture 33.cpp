#include <iostream>

using namespace std;

class Coordinate
{
	private:
		float a;
		float b;
		
	public:
	
	void distancefromcoordinate(float a,float b)
	{
		float dist;
		
		dist=(this->a-a)*(this->a-a)+(this->b-b);
	}
}
int main()
{
	
	Coordinate x;
	x.a=0;
	x.b=0;
	
	
	x.distancefromcoordinate();

}


#include<iostream>
using namespace std;

class stack{
	public:
		int* arr;
		int size;
		int top;
		
		stack(int size){
			this->size = size;
			arr = new int[size];
			top = -1;
		}
		
		void push(int element){
			if(size-top > 1){
				top++;
				arr[top] = element;	
			}
			else{
				cout<<"The stack is already full"<<endl;
			}
		}
		void pop(){
			if(top >= 0){
				top--;
			}
			else{
				cout<<"The stack is empty, and there are no elements to pop"<<endl;
			}
		}
		void peek(){
			if(top<0) cout<<"There are no elemnts in stack to peek"<<endl;
			else{
				cout<<"top element is: "<<arr[top]<<endl;
//				return arr[top];
			}
		}
		bool isEmpty(){
			if(top<0)
			{
				cout<<"The stack is empty"<<endl;
				return true;	
			 } 
			else{
				return false;
			}
		}	
};

int main(){
	stack new_stack(5);
	
	new_stack.peek();
	new_stack.push(5);
	new_stack.peek();
	new_stack.push(4);
	new_stack.peek();
	new_stack.push(3);
	new_stack.peek();
	new_stack.pop();
	new_stack.peek();
	new_stack.pop();
	new_stack.pop();
	new_stack.pop();
	new_stack.peek();
	return 0;
}
