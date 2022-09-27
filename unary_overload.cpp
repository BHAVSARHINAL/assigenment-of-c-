#include<iostream>
using namespace std;

class unary_overload
{
	public:
		
		int value;
		
		void setvalue(int c)
		{
		value=++c;
		}
	
	  //  void operator ++ ()
	  //  {
	  //  	--value;
	//	}
	
	    void operator ++ ()
	    {
	    	++value;
		}
	    void getvalue()
	    {
	    		cout<<value<<endl;
		
		}
	

	
};

int main()
{
	
	unary_overload obj;
//	obj.getvalue();
   ++obj;
	obj.setvalue(1000);
	obj.getvalue();
	
	return 0;
}