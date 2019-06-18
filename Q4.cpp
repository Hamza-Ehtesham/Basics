#include<iostream>
using namespace std;
int num(int a,int b);
int main()
{
	char ch;
	do
	{
	
	int a,b;
	cout<<"Enter 1st Integer: ";
	cin>>a;
	cout<<"Enter 2nd Integer: ";
	cin>>b;
	num(a,b);
	cout<<"Do again? (y/n): ";
	cin>>ch;
	}
	while(ch!='n');
	
}
int num(int c,int d)
{
	cout<<"The two Integers "<<c<<" and "<<d<<" are merged to "<<c<<d<<endl;	
}
