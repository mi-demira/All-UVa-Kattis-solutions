using namespace std;
#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    int lenghtHighway;
    

    while (true)
    {
        cin >> lenghtHighway;

        if (lenghtHighway == 0)
            break;

        string positions;
        cin >> positions;

        int minD = lenghtHighway;
        //vse oshte ne sa sreshtani
        int lastD = -lenghtHighway;
        int lastR = -lenghtHighway;

        for (int j = 0; j < lenghtHighway;j++)
        {
            //ima i drugstore i resturant
            if (positions[j] == 'Z')
            {
                minD = 0;
            }
            //ako stupim na drugstore
            else if (positions[j] == 'D')
            {
                //razstoqnie ot tekushtoto D do posledno namerenoto R
                minD = min(minD,j- lastR );
                //zapomnqme poziciq posledno D
                lastD = j;
            }
            else if (positions[j] == 'R')
            {
                //proverka za kude se namira poslednoto D
                minD = min(minD,j- lastD);
                //zapis poziciq posledno R
                lastR = j;
            }
          
        }
        cout << minD << endl;

     

    }
}

