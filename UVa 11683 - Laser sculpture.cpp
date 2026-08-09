using namespace std;
#include <iostream>

int main()
{
	int height, lenght;
	while (true)
	{
		cin >> height >> lenght;
		if (height == 0 && lenght == 0)
			break;

		

		int laserON = 0;

		//maks visochina
		int prevHeight = height;

		//vkarvame finalnata visochina na blokchetata sled lazera
		for (int j = 0;j < lenght;j++)
		{
			int finalHeight;
			cin >> finalHeight;

			//ako starata maks visochina e po-visoka ot visochinata na sledvashto block
			if (finalHeight < prevHeight)
			{
				//dulbochina, vsqko nivo nadolu e otdelno vkluchvane
				laserON += (prevHeight - finalHeight);
			}
			
			//zapazvame veche opraveniqt height kato previous
			prevHeight = finalHeight;
		}

		cout << laserON << endl;

	}
}
