#include<iostream>
using namespace std;

class A
{     
  protected:
	int vara=60;
	
	public:
		void geta()
		{
		
		cout<<"vara="<<vara<<endl;
	}
};
class B
{
	protected:
		int varb=789;
		
	public:	
		void getb()
		{
			cout<<"varb="<<varb<<endl;
		}
	};
class C : public A , public B		
		
{
	public:
		
		void getc()
		{
			cout<<"varc="<<endl;
		}	

};
int main ()
{
	C obj;
	obj.geta();
	obj.getb();
	obj.getc();	
	
			
		return 0;
}