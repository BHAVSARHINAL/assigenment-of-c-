#include<iostream>
using namespace std;

class op_overload
{
	public:
		int value;
		
 void setv(int v)
	{
		value=v;
	}
	
	op_overload operator +(op_overload x)
	{
	
	x.value=value+x.value;
	return x;
   }
	void getv()
	{
		cout<<value;
	}
	
	
};

int main()
{
	op_overload ob1,ob2,ob3,ob4,ob5,ob6,ob7,ob8,ob9,sum;
	ob1.setv(5);
	ob2.setv(5);
	ob3.setv(5);
	ob4.setv(5);
	ob5.setv(50);
	ob6.setv(5);
	ob7.setv(5);
	ob8.setv(10);
	ob4=ob1+ob2+ob3; //15
	ob9=ob5+ob6+ob7+ob8;//50+10=60
	
	sum=ob4+ob9; //15+60=75
	sum.getv();
	
	
	return 0;
}