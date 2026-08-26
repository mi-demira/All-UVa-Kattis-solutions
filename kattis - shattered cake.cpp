using namespace std;
#include <iostream>
#include <vector>


int main()
{
	int widthWhole;
	long long N;

	cin >> widthWhole;
	cin >> N;

	long long ploshtObshto=0;

	for (int i = 0; i < N;i++)
	{
		long w, h;
		cin >> w >> h;

		//dobavqme ploshta na segashno parche
		ploshtObshto += w * h;
	}

	//duljinata na cqlata torta
	long long heightWhole = ploshtObshto / widthWhole;
	cout << heightWhole << endl;

}
