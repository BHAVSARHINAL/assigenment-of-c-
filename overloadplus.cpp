#include<iostream>
using namespace std;
class overloadplus
{
	public:
		int value;
		void setvalue(int x)
		{
			value=x;
		}
		
		overloadplus operator+(overloadplus xyz)
		{
			
			xyz.value=value+xyz.value;
			return xyz;
		}
		
		void test()
		{
			cout<<value;
		}
		
	};

int main()
{
	overloadplus obj1,obj2,obj3,obj4;
	obj1. setvalue(200);
	obj2. setvalue(200);
	obj3. setvalue(200);	
	
	obj4. setvalue(200);
	
	
	obj4=obj1+obj2+obj3;
	obj4.test();
	return 0;
}