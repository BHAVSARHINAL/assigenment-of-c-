#include<iostream>
using namespace std;

class Person
{
	public:		
		int age;		
		
};

int main()
{
	Person p;
	cin>>p.Person::age;
	// obj-name.class-name::any var-name/function name
	
	// :: => scope resolution operator
	cout<<p.Person::age;	
	
	return 0;
}