#include<iostream>
using namespace std;

class Iplteam{
	public:
		int budget;
		string owner_name;
		string jersey_color;
		int no_of_trophies;
};


int main()
{
	//static object allocation
	Iplteam Mi; 
	Mi.no_of_trophies=5;
	cout<<Mi.no_of_trophies<<endl;
	
	//dynamic object allocation
	Iplteam *csk;
	csk= new Iplteam;
	csk->no_of_trophies=5;
	cout<<csk->no_of_trophies<<endl;
	
	
	

return 0;
}

