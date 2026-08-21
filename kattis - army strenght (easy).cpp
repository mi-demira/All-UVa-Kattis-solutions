using namespace std;
#include <iostream>

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int ng, nm;
		cin >> nm >> ng;

		int godzilaP = 0;
		int mechaGP = 0;


		//sum godzila and mecha power 

		for (int i = 0; i < ng; i++)
		{
			int power;
			cin >> power;
			godzilaP += power;
		} 

		for (int i = 0; i < nm; i++)
		{
			int power;
			cin >> power;
			mechaGP += power;
		}


		if (ng > nm)
		{
			cout << "Godzilla" << endl;
		}
		else if (nm > ng)
		{
			cout << "MechaGodzilla" << endl;
		}
		else
		{
			cout << "uncertain" << endl;
		}

	}
}
