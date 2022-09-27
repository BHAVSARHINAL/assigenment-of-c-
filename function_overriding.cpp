#include<iostream>
using namespace std;

class X
{

     public:
     	
     	void test()
     	{
     		cout<<"print fun time";
		 }

};

class Y : public X
{
	public:
		
		void test()
		{
		
	
		cout<<"print study time"<<endl;
       }
		
		
		
};

int main()
{

   Y obj;
  obj.test();
  obj.X::test();	
	return 0;
 } 