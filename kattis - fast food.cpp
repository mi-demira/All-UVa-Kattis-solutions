#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int n, m;
		cin >> n >> m;

		vector<int> pvalue(n);
		vector<vector<int>> prize_st(n); //dvumeren za da sydyrja i nagradata i stikerite nujni za neq


		//nagradite i kakvi stikeri trqbvat za tqh
		for (int i = 0; i < n;i++)
		{
			//kolko stikera trqbva za nagradata
			int k;
			cin >> k;
			prize_st[i].resize(k);

			for (int j = 0; j < k; j++)
			{
				cin >> prize_st[i][j];
			}

			//stoinost na nagrada
			cin >> pvalue[i];
		}


		vector<int> counts(m + 1); //nalichnost na stikerite
		for (int i = 1; i <= m; i++) 
		{
			cin >> counts[i];
		}

		//presmqtane
		long long total = 0;

		for (int i = 0; i < n; i++)
		{
			int min = INT_MAX;

			//za segashnata nagrada, namirame nai-rqdko sreshtaniqt stiker
			for (int st : prize_st[i])
			{
				if (counts[st] < min) 
				{
					min= counts[st];
				}
			}

			//ako poveche ot 0, umnojavame broikata, po sumata na nagrradata
			if (min > 0 && min != INT_MAX)
			{
				total += (long long)min * pvalue[i];
			}
		}
		cout << total << endl;
		
	}
}

