#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main(){
   
   string a;
   
   int Ccount=0,Lcount=0;
   bool w;
   
   char str[80];
	
	cout << "Enter a string: ";
	cin.getline(str,80);
   
   for(int i=0;i<str[i]!='\0' ;i++)
   {
   	w= true;
   	if(str[i] ==' ')
	   {
	   	Ccount++;
	   	
	   }
	else
	{	
		Lcount++;
	}
   }
   
   if(w==false)
   {
   	cout<<"Word Count   : "<<0<<endl;
   cout<<"Letter Count : "<<0<<endl;
   cout<<"Character Count : "<<0<<endl;
   }
   else{
   
	cout<<"Word Count   : "<<Ccount+1<<endl;
   cout<<"Letter Count : "<<Lcount<<endl;
   cout<<"Character Count : "<<Ccount+Lcount<<endl;
		
		}
}
