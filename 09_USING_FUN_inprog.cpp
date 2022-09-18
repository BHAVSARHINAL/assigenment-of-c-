#include<iostream>
using namespace std;
int x;
class person
{
	private:
		void choice()
	{
	
	cout<<"choice"<<endl;
		}	
	
	public:
	 void test()
	 {
	 	cout<<"game"<<endl;
	 	
		 }	
void test2242()
{
	
	cout<<"fun@"<<endl;
}
void req(int a)
{
	x=a;
	cout<<x<<endl;
}



};
int main()
{
	 person p;
	p.test();
	p. test2242();
	p.req(45);
	return 0;
}