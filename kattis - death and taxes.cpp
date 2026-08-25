using namespace std;
#include <iostream>
#include <iomanip>


int main()
{
	string d; // deistvieto
	int x, y;
	long long shares = 0;
	double avgCost = 0;

	while (cin >> d)
	{
		if (d == "buy")
		{
			cin >> x >> y;
			avgCost = (shares * avgCost + x * y) / (shares + x); //cena stari akcii + cena novi akcii / vsichki akcii koito imame
			shares += x; //broi
		}
		else if (d == "sell")
		{
			cin >> x >> y;
			shares -= x; //namalqva samo broq, nqmame tax tuk
		}
		else if (d == "split")
		{
			cin >> x; //na kolko delim akciite 
			shares *= x;
			avgCost /= x;

		}
		else if (d == "merge")
		{
			//kolko akcii se subirat v edna
			cin >> x;
			//ako akciite ne se delqt tchno, ostatuka se prodava vednaga
			long long r = shares % x;
			//mahame gi ot obshtiq broi
			shares -= r;
			shares /= x;
			avgCost *= x;


		}
		else if (d == "die")
		{
			//cena za share
			cin >> y;
			double profit = (y - avgCost) * shares;
			double result = y * shares - profit * 0.3;

			if (result > 0.0)
			{
				cout << fixed << setprecision(2) << result;
			}
			break;
		}

	
	}
}


