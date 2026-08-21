using namespace std;
#include <iostream>
#include <vector>
#include <algorithm> 


int main()
{
	int T;
	cin >> T;

	int testCase = 1;

	while (T--)
	{
		
		int N;
		cin >> N;
		vector <int> cardValues;

		for (int i = 0;i < N;i++)
		{
			int value;
			cin >> value;
			cardValues.push_back(value);
		}

		//trqbva ni the value of 1 card, the highest one
		//pri pobitovo i, pri dobavqne na chislo, rezultata ili ostava sushtiq, ili namalqva
		int maxValue = 0;

		for (int j = 0;j < N; j++)
		{
			if (cardValues[j] > maxValue)
			{
				maxValue = cardValues[j];
			}
		}

		cout << "Case " << testCase << ":" << maxValue << endl;
		testCase++;



		
	}
}
