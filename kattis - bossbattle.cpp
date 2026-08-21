using namespace std;
#include <iostream>

int main()
{
	int pillars;
	while (cin >> pillars)
	{
		//base case
		if (pillars <= 3)
		{
			cout << "1" << endl;
		}
		//v purvi hod se unishtojava ne samo ocelenata, a i 2 koloni oshte
		else if (pillars > 3)
		{
			cout << pillars - 2 << endl;
		}
	}
 
}
