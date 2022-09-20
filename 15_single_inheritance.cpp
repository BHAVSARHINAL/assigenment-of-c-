#include<iostream>
using namespace std;

class A
{
	public:
		 void getA()
  {
  
  cout<<"class get a"<<endl;	
}
};

class B : public A
{ 
public:
	void getB()
	{
		cout<<"class get b";
}
};

int main()
{
   B obj;
   obj.getA();
   obj.getB();
	
	return 0;
	
	
}