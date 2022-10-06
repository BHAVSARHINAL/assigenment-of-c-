#include<iostream>
using namespace std;
class ekta;
class jaya
{
	private:
		int  m1=200;
	public:
		friend void smita(ekta e,jaya j);
		
};
class ekta
{

private:
	int  m2=200;
public:
	
    friend void smita(ekta e,jaya j);

};

void smita(ekta e,jaya j)

{
	cout<<e.m2+j.m1;
}


int main()
{
	
	ekta obj1;
	jaya obj2;
	smita(obj1,obj2);
	
	return 0;
}