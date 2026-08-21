using namespace std;
#include <iostream>
#include <vector>

int main()
{
	int N, M;

	while (cin >> N >> M)
	{
		int B;
		//num rounds
		for (int i = 0;i < M;i++)
		{
			int sumP = 0;
			//every round has diff budget
			cin >> B;

			//daedalus is always the value at index 0
			vector <int> points;
			for (int j = 0; j < N;j++)
			{
				int point;
				cin >> point;
				points.push_back(point);
				sumP += point;

			}

			//kogato e zaguba, nqma nujda ot proverka
			bool win = false;
			if (sumP <= B)
				win = true;

			if (win)
			{
				int extraPoints= B - sumP;
				cout << extraPoints << endl;
			}

			

		}
	}
}
