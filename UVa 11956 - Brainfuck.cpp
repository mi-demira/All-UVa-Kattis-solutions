using namespace std;
#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    int T;
    cin >> T;
    int caseN = 1;
    //mahame /n sled T
    cin.ignore();

    while (T--)
    {
        //zadelqme pamet 
        unsigned char memory[100] = { 0 };
        int pointer = 0;
        char ch;

        //direktno chetene na simvoli dokato ne prikluchim 
        while (cin.get(ch) && ch != '\n')
        {
            switch (ch)
            {
                //krugov bufer
            case '<': pointer = (pointer - 1+100) % 100; //+100 za da ne stava indeksa otricatelen
                break;
            case '>' :pointer = (pointer + 1) % 100; //modul za da ne previshavame dadenata pamet, zavurta se ot 99 na 0
                break;
            case '+': memory[pointer]++;
                break;
            case '-': memory[pointer]--;
                break;
            default:
                break;
            }

        }

        std::cout << "Case " << caseN << ":";
        for (int i = 0; i < 100; ++i) 
        {
            cout << " "
                << hex
                << uppercase
                << setw(2)
                << setfill('0')
                << (int)(unsigned char)memory[i];
        }
        cout << '\n';

        caseN++;
    }
}
