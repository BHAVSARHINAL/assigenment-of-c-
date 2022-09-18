#include<iostream>
using namespace std;

class variable
{
   public:
   	
   	void sum()
   	{
   		int a,b;
   		cout<<"make a sum..\n";
   		cin>>a>>b;
   	//	cin>>a+b;
   	//	cout<<a<<endl<<b;
   		cout<<"total is.."<<a+b;
   		
	   }




	
};

int main()
{
	variable v;
	v.sum();
	
	return 0;
}