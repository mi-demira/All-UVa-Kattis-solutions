using namespace std;
#include <iostream>

int main()
{ 
	int T;
	cin >> T;
	while (T--)
	{
		//nai-silnite chudovishta za vsqka armiq

		int maxG = INT_MIN;
		int maxM = INT_MIN;

		int G;
		int M;
		cin >> G >> M;

		int sila;

		for (int i = 0; i < G; i++)
		{
			cin >> sila;
			if (sila > maxG)
			{
				maxG = sila;
			}
		}

		for (int i = 0; i < M; i++)
		{
			cin >> sila;
			if (sila > maxM)
			{
				maxM = sila;
			}
		}

		if (maxG > maxM)
		{
			cout << "Godzilla" << endl;
		}
		else if(maxM>maxG)
		{
			cout << "MechaGodzilla" << endl;
		}
		else
		{
			cout << "uncertain" << endl;
		}

	}
}

