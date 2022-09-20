#include<iostream>
using  namespace std;

class father
 {
 protected:
 int money=500;

};

class mother:public father
{
	public:
		void get123()
  {
	cout<<"share money to mother="<<money<<endl; 
	}
};
		
class son:public father
{ 
 public:
	void gets()
	{
		cout<<"share money to son="<<money;
	}
		
};

int main()
{
	mother m;
	son s;
    m.get123();
    s.gets();
	return 0;
}