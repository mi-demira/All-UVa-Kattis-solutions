using namespace std;
#include <iostream>


int main()
{
    //starting and end coordinates
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    int t;//battery
    cin >> t;

    //manhattan distance - nagore nadolu, nalqvo nadqsno
    int distance = abs(c - a) + abs(d - b);

    //trqbva da se izrazhodi v u turns
    int izlishniD = t - distance;
    
    //ako izlishnite ne sa chetni, nqma kak da izrazhodim bateriqta
    if (t >= distance && izlishniD % 2 == 0)
        cout << "Y";
    else
        cout << "N";
}

