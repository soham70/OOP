#include<iostream>
using namespace std;

class IPLTeam{
	public:
		//Parameterized Constructor
		IPLTeam(int bug,string own,string jcolor,int tphs)
		{
			budget=bug;
			owner=own;
			jersey_color=jcolor;
			trophies=tphs;
		}
		
		//Copy Constructor
		IPLTeam(IPLTeam &t)
		{
			trophies=t.trophies;
		}
		int budget;
		string owner;
		string jersey_color;
		int trophies;
};

int main()
{
	IPLTeam MI(200,"Ambani","Blue",5);
	cout<<MI.owner<<endl;
	IPLTeam csk(MI);
	cout<<csk.trophies<<endl;

return 0;
}

