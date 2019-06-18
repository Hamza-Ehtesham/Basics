#include<iostream>
#include<string>
using namespace std;
int sum(int n);
int fact(int number);
int hcf(int n1,int n2);
int main()
{	

	
	
	string ch;
	cout<<"Type 'sum' to calculate the sum of natural numbers"<<endl;
	cout<<"Type 'factorial' to find the factorial of that number"<<endl;
	cout<<"Type 'hcf' to find the hcf of two integers"<<endl;
	
	cout<<"Enter The Function Name you want to use: ";
	getline(cin,ch);
	
	if(ch=="sum")
	{
		int n;
		cout<<"Enter  positive integer: ";
		cin>>n;
		cout << "Sum of natural numbers upto "<<n<<" is "<<sum(n)<<endl;
         
	}
	else if(ch=="factorial")
	{
		
			int number;
	
	cout << "Please enter a positive integer: ";
	cin >> number;
	if (number < 0)
	{
	
		cout << "That is not a positive integer.";
		
		}
	else
		cout << number << " factorial is: " << fact(number) << endl;
		
	}
	else if(ch=="hcf")
	{
		 int n1, n2;
   cout << "Enter two positive integers: ";
   cin >> n1 >> n2;
   cout << "H.C.F of " << n1 << " & " <<  n2 << " is: " << hcf(n1, n2);
   return 0;
	}
	else
	{
		cout<<"ERROR!! Not a Function described above ";
	}

}
int sum(int c)
{
	if(c!=0)
     return c+sum(c-1);
}
int fact(int number)
{
	int z;

	if(number <= 1) return 1;

	z = number * fact(number - 1);
	return z;
}
int hcf(int n1,int n2)
{
	if (n2!=0)
       return hcf(n2, n1%n2);
    else 
       return n1;
}


