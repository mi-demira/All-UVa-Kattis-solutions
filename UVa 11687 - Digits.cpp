using namespace std;
#include <iostream>
#include <string>

int main()
{
    string x0;
    while (true)
    {
        cin >> x0;
        if (x0 == "END")
            break;

        //chisloto suvpada s broq cifrite
        if (x0=="1")
        {
            cout << 1 << endl;
        }

        int x1 = x0.length();

        //purva stupka e veche napravena
        int counter = 1;

        while (true)
        {
            //duljina na segashno chislo
            int nextX = to_string(x1).length();
            counter++;

            //ako sa ravni, prekusvame
            if (nextX == x1)
            {
                break;
            }

            //novoto chislo stava x1
            x1 = nextX;
        }

        cout << counter << endl;

    }
}

