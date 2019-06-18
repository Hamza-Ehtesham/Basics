#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main(){
   string pass ="";
   string upper="";
   char ch;
   cout << "Enter Phrase\n";
   ch = _getch();
   while( ch != 13 ){//character 13 is enter
      pass.push_back(ch);   
      ch = _getch();
      if(pass.length()==79)
	  {
      	break;
	  }
   }
   
   cout<<"Entered Phrase\n"<<pass<<endl<<endl;
 
   
   cout<<"Reverse"<<endl<<endl;
   for(int i=pass.length()-1;i>=0;i--)
   {
   	cout<<pass[i];
   }
   
   
   cout<<"\nConvert a to A"<<endl<<endl;
   for(int i=0;i<pass.length();i++)
   {
   	upper = pass[i];
   	if(upper=="a")
	   {
   			cout<<"A";	
	   }
	  else
	  		cout<<pass[i];	
   }
   
   
   
}
