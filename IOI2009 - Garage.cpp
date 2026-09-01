using namespace std;
#include <iostream>
#include <queue>


int main()
{
    //parking spaces
    int n;
    //num cars coming in
    int m;

    cin >> n >> m;

    int* rates = new int[n+1];
    //input rates for every parking space - per kg
    for (int i = 1; i <=n;i++)
    {
        cin >> rates[i];
    }

    int* weight = new int[m+1];
    //weight of every coming car
    for (int i = 1; i <=m;i++)
    {
        cin >> weight[i];
    }

    //zapomnqne na zaeti i svobodni mesta
    int* oc = new int[n+1];
    for (int i = 1; i <=n; i++) 
    {
        oc[i] = 0;
    }

    //pomni kude e vsqka ot kolite
    int* carIndex = new int[m + 1];

    //opashka za kolite
    queue<int> waitingCar;
    long long pechalba = 0;

    for (int i = 1; i <=m * 2;i++)
    {
        int event;
        cin >> event;

        //vliza kola
        if (event > 0)
        {
            int car = event;
            //nevaliden index - predpolagame che vsichko e zaeto
            int freeS= -1;
            for (int j = 1; j <=n; j++)
            {
                //namerim li svobodno mqsto
                if (oc[j] == 0)
                {
                    //zaemame go
                    freeS = j;
                    break;
                }
            }

            //ako e drugo chislo, parkira
            if (freeS != -1)
            {
                //indeksa se promenq na occupied 
                oc[freeS] = car;
                //zapazvame na koe mqsto parkira
                carIndex[car] = freeS;
                //cena na tova mqsto * kolko kilograma e kolata
                pechalba += (long long)weight[car] * rates[freeS];
            }
            else {
                //nqma mqsto, vrushta se v opashkata
                waitingCar.push(car);
            }

        }
        else
        {
            //kola si trugva
            int car = -event;
            //index ot koito si trugva kolata
            int space = carIndex[car];


            oc[space] = 0; //osvobojdava se mqsto

            //ako opashkata ne e prazna
            if (!waitingCar.empty())
            {
                //vzimame kolata koqto chaka
                int nextC = waitingCar.front();
                //mahame q ot opashkata
                waitingCar.pop();

                //kolata parkira na osvobodenoto mqsto
                oc[space] = nextC;
                //na indeksa na koito minalata kola e bila
                carIndex[nextC] = space;
                //smqtane na suma
                pechalba += (long long)weight[nextC] * rates[space];
            }
        }

        
    }

    cout << pechalba << endl;
}


