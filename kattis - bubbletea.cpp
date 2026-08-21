using namespace std;
#include <iostream>
#include <vector>

int main()
{
    int tea;

    while (cin >> tea)
    {
        vector <int> priceTea;

        for (int i = 0;i < tea; i++)
        {
            int price;
            cin >> price;
            priceTea.push_back(price);
        }

        int toppings;
        cin >> toppings;

        vector <int> priceTop;

        for (int j = 0; j < toppings; j++)
        {
            int p;
            cin >> p;
            priceTop.push_back(p);
        }

        //kazvane koi chai s koi topping moje da e
        vector <vector<int>> pozvoleniTop(tea);

        for (int k = 0; k < tea; k++)
        {

            int numberOfToppings;
            cin >> numberOfToppings;

            for (int j = 0; j < numberOfToppings; j++)
            {
                int indexTop;
                cin >> indexTop;

                pozvoleniTop[k].push_back(indexTop);
            }

        }

        //trqbva ni nai-evtiniqt chai

        int minP = INT_MAX;

        for (int i = 0; i < tea; i++)
        {
            for (int j = 0; j < pozvoleniTop[i].size(); j++)
            {
                int topping = pozvoleniTop[i][j];

                int fullP = priceTea[i] + priceTop[topping - 1]; // -1 za da otidem na indeksa 

                if (fullP < minP)
                {
                    minP = fullP;
                }

            }
        }
        int money;
        cin >> money;

        int result = (money / minP) - 1;
        cout << result << endl;
    }
}
