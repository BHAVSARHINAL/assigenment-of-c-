#include<iostream>
using namespace std;

class A
 {
 	
 	public:
 		
 		A()
 		{
 			cout<<"write  a number...\n"<<endl;
 			
 			int a=50,b=2;
 			
 			cout<<"sum="<<a+b<<endl<<endl;
 			
 			cout<<"sum="<<a*b<<endl<<endl;
 			
 			cout<<"sum="<<a/b<<endl<<endl;
 			
 			cout<<"sum="<<a-b;
		 }
		 
		 
 };
int main()
{
	
	A obj;
	
	return 0;
}