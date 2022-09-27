#include<iostream>
using namespace std;

class game_over_loding
{
   public:
   	
   	void game()
   	{
   		cout<<"game"<<endl;
	   }
    void game(string d )
    {
    	cout<<"game start"<<d<<endl;
	}
    void game(int x)
    {
    	cout<<"play game "<<x<<endl;
	}
    void game(int x,string yt)
    {
    	cout<<"stop game "<<x  << yt;
	}
};


int main()
{
	 
	  game_over_loding obj;
	  obj.game();
	  obj.game(" play");
	  obj.game( 78);
	  obj.game(565,  " hello");
	 return 0;
	 
}