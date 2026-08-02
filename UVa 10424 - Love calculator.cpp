using namespace std;
#include <iostream>
#include <string>
#include <iomanip>

//func for calculation
int Sum(string name)
{
	int sum = 0;
	//preminavane prez vsichki bukvi v imeto
	for (int i = 0;i < name.size();i++)
	{
		//proverka dali znaka e mejdu a i z
		if (name[i] >= 'a' && name[i] <= 'z')
		{
			sum += name[i] - 'a' + 1; //+1 zashtoto a ne e 0 
		}
		else if (name[i] >= 'A' && name[i] <= 'Z')
		{
			sum += name[i] - 'A' + 1; //+1 zashtoto a ne e 0 
		}
	}

	//smetka na sumata, cifrov koren
	if (sum % 9 == 0)
	{
		return 9;
	}
	else
	{
		return sum % 9;
	}

}

int main()
{
	string name1;
	string name2;

	//eof
	while (true)
	{
		getline(cin, name1);
		getline(cin, name2);

		int nameOne = Sum(name1);
		int nameTwo = Sum(name2);

		double ratio;

		//proverka koq suma e po-malka za da ne stanat procentite nad 100
		if (nameOne < nameTwo)
			ratio = (double)nameOne / nameTwo * 100;
		else
			ratio = (double)nameTwo / nameOne * 100;

		cout << fixed << setprecision(2) << ratio << " %" << endl;
			
	}
}

