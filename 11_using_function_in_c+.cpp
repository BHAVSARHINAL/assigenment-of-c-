#include<iostream>
using namespace std;

class test
{
	public:
		
		int waight;
		void getB(int b)
		{
			waight=b;
		cout<<waight<<endl;
		}
		
};
int main()
{
	test t;
    t.getB(67);
	return 0;
}