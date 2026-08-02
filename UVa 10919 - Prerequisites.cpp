using namespace std;
#include <iostream>
#include <vector>

int main()
{
	int numCourses;
	int categories;
	

	while (cin>>numCourses && numCourses!=0)
	{
		cin>>categories;

		vector <int> passedC(numCourses);

		for (int i = 0; i < numCourses; i++)
		{
			cin >> passedC[i];
		}

		//za vsqka kategoriq,

		int failed = 0;
		for (int j = 0; j < categories;j++)
		{
			//kolko kursa sa vzeti i kolko trqbva da sa vzeti
			int required, totalCourses;
			cin >> totalCourses >> required;

			//counter for passed ones
			int counter = 0;

			//vsichki kursove ot kategoriqta
			for (int k = 0;k < totalCourses;k++)
			{
				int course;
				cin >> course;
				//tozi konkreten kurs vzet li e
				for (int l = 0; l < numCourses; l++)
				{
					if (passedC[l] == course)
					{
						counter++;
						break;
					}
				}
			}
			if (counter<required)
				failed++;
		
		}

		if (failed == 0)
		{
			cout << "Yes!" << endl;
		}
		else
		{
			cout << "No!" << endl;
		}
	}
		

}
