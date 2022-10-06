#include<iostream>
using namespace std;
class A
{
	public:
		void geta()
		{
			cout<<"x"<<endl;
		}
	
};

class B : public virtual A
{
	public:
		void getb()
		{
			cout<<"y"<<endl;
	}
	
};

class C :public virtual A
 {
     public:
     	void getc()
     	{
     		cout<<"z"<<endl;
		 }	
};

class D :public B ,public C
{
	public:
		
		void getd()
		{
			cout<<"a"<<endl;
		}
};



int main()
{
	D obj;
	obj.getb();
	obj.getc();
	obj.geta();
	obj.getd();
	
	
	return 0;
}