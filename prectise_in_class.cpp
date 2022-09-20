#include<iostream>
using namespace std;
 class person
 {
      private:
	  int game;   
	  
	  public:
	  
	  person(int g)
	  {
	     game=g;	
 	    cout<<game<<endl;
 }
        person(person &test)
        {
        	
        	cout<<test.game;
		}
 };

 int main()
 {
 	person g(67);
 	person t(76);
 	
 	return 0;
 }