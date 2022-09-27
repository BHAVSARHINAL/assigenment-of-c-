#include<iostream>
using namespace std;

class  op_overload

{
   public:
   	
    int value;
   void setv(int v)
   {
   	value=v;
	   }	
	
  op_overload operator +(op_overload m)
  {
  	
  	m.value=value+ m.value;
  	return x;
  }
  
  
  
   void getv()
   {
   	  cout<<value<<endl;
	   }	
	
};
int main()
{
	op_overload ob1,ob2,ob3;
	ob1.setv(5);
	ob2.setv(25);
	

	
	ob3  =ob1 +ob2;  
	
	ob3.getv();
	
	return 0;
	
	
}