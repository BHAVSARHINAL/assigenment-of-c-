#include<iostream>
using namespace std;

class X
{
	public:
	
	int y=56;
	
   void test123()
	{
		cout<<"this is a variable.."<<endl<<"y=";
	}
};

int main()
{
	
    X a;//CLASS NAME
	a.test123();//MEMBER FUNCTION
	cout<<a.y;//DATA MEMBER
	
	

	return 0;
}