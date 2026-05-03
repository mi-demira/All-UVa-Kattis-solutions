using namespace std;
#include <iostream>
#include <string>

int main()
{
	string mAtk;
	cin >> mAtk;

	for (int i = 0; i < mAtk.length();)
	{
		//proverka dali ostavat 3 simvola 
		if (i + 2 < mAtk.length())
		{
			string three = mAtk.substr(i, 3);

			//proverka dali 3te simvola sa razlichni
			if (three[0] != three[1] && three[0] != three[2] && three[1] != three[2])
			{
				//combo
				cout << 'C';
				i +=3;
				continue;

			}
		}

		//ako nqma kombo
		if (mAtk[i] == 'R')
		{
			cout << 'S';

		}
		else if (mAtk[i] == 'B')
		{
			cout << 'K';

		}
		else if (mAtk[i] == 'L')
		{
			cout << 'H';

		}
		i++;
	}
	cout << endl;
}
