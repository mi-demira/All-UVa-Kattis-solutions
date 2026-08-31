using namespace std;
#include <iostream>

int main()
{
	int rows, columns;
	cin >> rows >> columns;

	char** map = new char* [rows];

	for (int i = 0; i < rows;i++)
	{
		map[i] = new char[columns];
	}

	//input
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < columns; col++)
		{
			cin >> map[row][col];
		}
	}

	
	int steps = 0;
	int r=0, c=0; //coordinates
	//moves

	while (true)
	{
		//out of bounds check
		if (r > rows || c >> columns || r<0 || c<0)
		{
			cout << "Out" << endl;
			break;
		}

		//found
		if (map[r][c] == 'T')
		{
			cout << steps << endl;
			break;
		}

		//lost - more steps than the whole grid
		if (steps > c * r + 1)
		{
			cout << "Lost" << endl;
			break;
		}

		//steps
		if (map[r][c] == 'N')
		{
			r--;
			steps++;
		}

		if (map[r][c]=='S')
		{
			r++;
			steps++;
		}

		if (map[r][c] == 'W')
		{
			c--;
			steps++;
		}

		if (map[r][c] == 'E')
		{
			c++;
			steps++;
		}

	}





	delete[]map;

}

