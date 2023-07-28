#include<iostream>
using namespace std;

class IPLTeam{
	public:
		IPLTeam(int bug,string own,string jcolor,int tphs)
		{
			budget=bug;
			owner=own;
			jersey_color=jcolor;
			trophies=tphs;
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

return 0;
}

