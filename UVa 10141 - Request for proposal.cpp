using namespace std;
#include <iostream>
#include <string>
#include <vector>

int main()
{
	int n; //broi iziskvaniq
	int p; //broi predlojeniq

	int test = 0;

	while (cin >> n >> p && n && p != 0)
	{
		cin.ignore();
		test++;
		vector <string> iziskvaniq(n);
	

		//chetene na iziskvaniqta
		for (int i = 0; i < n;i++)
		{
			getline(cin, iziskvaniq[i]);
		}

		//za da zapazim nai-dobriqt variant
		string bestName;
		double bestCompliance = -1.0; //procent
		double bestPrice = 0;
	

		//vseki proporsal
		for (int j = 0; j < p; j++)
		{
			string name;
			float d; //cena
			int r; //iziskvaniq koito se pokrivat

			getline(cin, name);
			cin >> d >> r;
			cin.ignore();
		

			//chetene na pokriti iziskvaniq
			vector <string> pokritiIziskvaniq(r);
			for (int k = 0; k < r;k++)
			{
				getline(cin, pokritiIziskvaniq[k]);
			}

			float numCompliances =(float) r / n;

			//smenqme nai-dobroto predlojenie
			if (numCompliances > bestCompliance)
			{
				bestCompliance = numCompliances;
				bestPrice = d;
				bestName = name;
			}
			//ako ednakvi req met , po cena
			else if (numCompliances == bestCompliance && d < bestPrice)
			{
				bestPrice = d;
				bestName = name;
			}

		}

		if (test > 1)
			cout << endl;

		cout << "RFP #" << test << endl;
		cout << bestName << endl;

	}

}
