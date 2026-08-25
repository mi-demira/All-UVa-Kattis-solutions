using namespace std;
#include <iostream>
#include <vector>

int main()
{
	int N;
	cin >> N;

	//za da moje rezultata da se izvede sled cqloto vuvejdane
	vector<bool> r;

	while (N--)
	{
		double a, b, c;
		cin >> a >> b >> c;

		//edno ot tezi usloviq trqbva da e true, inache impossible
		bool possible =a + b == c ||	a - b == c ||b - a == c ||a * b == c ||(b != 0 && a / b == c) ||(a != 0 && b / a == c);

		r.push_back(possible);
	}

	for (bool result : r)	
	{
		if (result)
			cout << "Possible" << endl;
		else
			cout << "Impossible" << endl;
	}
}
