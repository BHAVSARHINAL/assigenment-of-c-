#include<iostream>
using namespace std;

class dev 
{
	private :
		string game="play...";
		
		
		public:
		
		friend void harsh(dev ref);
};

  void harsh(dev ref)
{
	cout<<ref.game<<"vollyboll...";
}
int main()
{
	
	dev obj;
    harsh(obj);
	
	return 0;
}