#include<iostream>
using namespace std;

template<class abc>
abc test(abc a,abc b)
{
	return a+b;
	
//	cout<<a+b<<endl;
}

int main()
{
	cout<<test(3,4);
	cout<<test(4.4,8.9);
	return 0;
}