//Student YouWei,Student Number 1120161033
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	float ftotal = 1;
	{
		float faddonT = 1;
		for (int norderT = 1; faddonT >= 1e-6; ++norderT)
		{
			faddonT = 1.0 / (norderT * 2 + 1);
			(norderT % 2) == 1 ? ftotal -= faddonT : ftotal += faddonT;
		}
	}
	cout << "PI/4 equals:\t" << ftotal << endl << "the PI equals:\t" << setprecision(8) << ftotal * 4 << endl << "press ENTER to exit";
	getchar();
	return 0;
}