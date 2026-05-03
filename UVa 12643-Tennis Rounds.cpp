using namespace std;
#include <iostream>
#include <cmath>
#include <algorithm>

//izkarvame runda na koito igrach i i j biha se sreshtnali
int main()
{
	int N; //num of players pow by 2

	long long i, j;

	while (cin >> N >> i >> j)
	{
		//na koi rund sme
		int round = 0;

		//delene na 2 bez ostatuk dokato ne stanat edno i sushto chislo
		while (i != j)
		{
			//nomera na igracha stava nomera na matcha, poziciqta koqto zaema
			i = (i + 1) / 2;
			j = (j + 1) / 2;
			round++;

		}

		cout << round << endl;
	}
}

