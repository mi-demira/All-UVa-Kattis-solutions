using namespace std;
#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    int C;
    cin >> C;
    cin.ignore();

    while (C--)
    {
        string S;
        string T;

        cin >> S >> T;

        //za da broim vseki opredelen transition
        int zeroToOne = 0;
        int oneToZero = 0;
        int questionToZero = 0;
        int questionToOne = 0;


        for (int i = 0; i < S.size();i++)
        {
            //ako sa ednakvi, nqma kakvo da tursim poveche v tazi iteraciq
            if (S[i]==T[i])
            {
                continue;
            }

            if (S[i] == '0' && T[i] == '1')
                zeroToOne++;
            if (S[i] == '1' && T[i] == '0')
                oneToZero++;
            if (S[i] == '?' && T[i] == '0')
                questionToZero++;
            if (S[i] == '?' && T[i] == '1')
                questionToOne++;
        }

        //proverka kolko dvoiki 1->0 i 0->1 mojem da namravim
        //swap is one operation
        int razmeni = min(zeroToOne, oneToZero);

        int otg = razmeni;
        //mahame veche razmenenite ot swap
        otg += zeroToOne - razmeni;
        otg += oneToZero - razmeni;

        otg += questionToZero;
        otg += questionToOne;

        cout << otg << endl;

    }

}

