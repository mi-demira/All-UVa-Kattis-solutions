using namespace std;
#include <iostream>
#include <string>
#include <stack>

int filledWater(const string& town)
{
    int result = 0;
    stack <char> s; //indeksi na vsichki sreshtnati \

    for (int i = 0; i < town.length(); i++)
    {
        //spuskane nadolu
        if(town[i]=='\\')
        {
            s.push(i);
        }
        else if (town[i] == '/' && !s.empty()) //proverka dali sushtestvuva \ (dali ima neshto v steka)
        {
            //izchislenie na shirinata
            result += i - s.top(); //vzimame nai-blizkiqt "\"
            s.pop(); //veche e zatvoren, mahame go
        }
    }

    return result;
}
int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        string town;
        cin >> town;

        cout << filledWater(town);
    }
}

