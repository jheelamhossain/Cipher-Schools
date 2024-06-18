The address of an element refers to the memdry location where that element
is stored.
Every variable and object in C++ is assigned a unique memory address, and
you can obtain the address of an element using the address-of operator,
denoted by the ampersand symbol (&)

#include<iostream>
using namespace std;
int main()
{
long long int a;
int b;
cout<<"The size of int is:"<<sizeof(b)<<"the size of long is :"<<sizeof(a)<<endl;
cout<<"The address of a is:"<<&a<<"The address of b is"<<&b;
  return 0;
}

#include<iostream>
using namespace std;
int main()
{
long long int a;
int b;
float c;
cout<<"The size of int is:"<<sizeof(b)<<"the size of long is :"<<sizeof(a)<<endl;
cout<<"The address of c is:"<<&c<<"The address of b is"<<&b;
  return 0;
}

Address of an element id represented in hexadecimal code
