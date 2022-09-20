#include<iostream>
using namespace std;
class person
{
	private:
	 int money;
	 
	public:
		
		 person(int m)
		{
			money=m;
			
			cout<<money<<endl;
		}
	
	  person(person &place)
	  {
	  	   cout<<place.money;
	  }
};
	
int main()
{
	
	person x(590);
    person u(283);
	  return 0;
}