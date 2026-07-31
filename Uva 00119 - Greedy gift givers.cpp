using namespace std;
#include <iostream>
#include <vector>
#include <string>
#include <map>

int main()
{
	//number of people in a group
	int n;

	//read untill EOF 
	while (cin >> n)
	{
		vector <string> names(n);

		//imena + kolko pari sa poluchili
		map <string, int> balance;

		//name inputs in order + setting all balance to 0
		for (int i = 0; i < n;i++)
		{
			cin >> names[i];
			balance[names[i]] = 0;
		}

		//gift - money excange
		for (int i = 0; i < n;i++)
		{
			string giver; int total, num_recivers;

			cin >> giver >> total >> num_recivers;

			//proverka
			if (num_recivers > 0)
			{
				int giftMoneyEach = total / num_recivers;

				//need leftover
				int leftover = total % num_recivers;

				//deduct only whats spent
				balance[giver] -= (total- leftover);

				//razpredelqne po vseki koito poluchava podaruk
				for (int j = 0; j < num_recivers;j++)
				{
					string name;
					cin >> name;
					balance[name] += giftMoneyEach;
				}
			}
		}

		//print balances of all friends

		for (int k = 0;k < n; k++)
		{
			cout << names[k] << " " << balance[names[k]] << endl;
		}

	}
}


