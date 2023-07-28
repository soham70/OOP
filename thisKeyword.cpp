#include<iostream>
using namespace std;

class IPLTeam{
	public:
		IPLTeam(int budget,string owner,string jersey_color,int trophies)
		{
			this->budget=budget;
			 this->owner=owner;
			this->jersey_color=jersey_color;
			this->trophies=trophies;
		}
		
		IPLTeam(IPLTeam &t)
		{
			trophies=t.trophies;
			jersey_color=t.jersey_color;
		}
		
		int budget;
		string owner;
		string jersey_color;
		int trophies;

	~IPLTeam()
	{
		cout<<"\nDestructor Invoked";
	}


};

int main()
{
	IPLTeam MI(200,"Ambani","Blue",5);
	cout<<MI.owner<<endl;
	IPLTeam csk(MI);
	cout<<csk.jersey_color<<endl;

return 0;
}

