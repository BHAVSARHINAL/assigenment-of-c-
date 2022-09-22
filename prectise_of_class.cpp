#include<iostream>
using namespace std;
class father
  {
  protected:
  int rupee=500;
};

class mother: public father
 {
	public :
		void getr()
		{
			cout<<"rupee for mother..\n";
		}
	};
	
class son:public father
{
  public:
			    void test()
	    { 
	    cout<<"rupee paid for son..";
		}

};
int main()
{   mother m;
   son s;
	m.getr();
	s.test();
	return 0;
}

