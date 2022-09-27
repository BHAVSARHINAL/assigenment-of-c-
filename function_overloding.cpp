#include<iostream>
using namespace std;

class game_over_loding
{
   public:
   	
   	void game()
   	{
   		cout<<"game"<<endl;
	   }
    void start()
    {
    	cout<<"game start"<<endl;
	}
    void play()
    {
    	cout<<"play game"<<endl;
	}
    void stop()
    {
    	cout<<"stop game";
	}
};


int main()
{
	 
	  game_over_loding obj;
	  obj.game();
	  obj.play(787);
	  obj.start(87);
	  obj.stop();
	  
	 
	 
	 return 0;
	 
}