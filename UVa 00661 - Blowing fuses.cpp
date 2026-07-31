using namespace std;
#include <iostream>
#include <vector>

int main()
{
    int n; //num of devices
    int m; // num on and off operations
    int c; //Amper capacity of the fuse
    int test = 0;
    
    //reading before proverka
    while (cin >> n >> m >> c && (n != 0 || m != 0 || c != 0))
    {
        test++;
        vector <int> AmpConsumpion(n);

        //all devices are off at the start , even number means off
        vector<int> clickCount(n, 0); 

        for (int i = 0; i < n;i++)
        {
            cin >> AmpConsumpion[i];
        }

        int currentPower = 0;
        int maxPower = 0;
        bool blown = false;


        for (int j = 0; j < m;j++)
        {
            int indexDevice;
            cin >> indexDevice;

            //for 1 to N
            int idx = indexDevice - 1;

            //uvelicheno natiskane
            clickCount[idx]++;

            //if odd num- on, if even num - off
            if (clickCount[idx] % 2 != 0)
            {
                //on
                currentPower += AmpConsumpion[idx];

                //proverka dali e grumnalo 
                if (currentPower > maxPower)
                {
                    maxPower = currentPower;
                }
                if (currentPower > c)
                {
                    blown = true;
                }
            }
            else
            {
                //no energy consumption
                currentPower -= AmpConsumpion[idx];
            }

        }

        cout << test << endl;
        if (blown)
        {
            cout << "Fuse was blown." << endl;
        }
        else
        {
            cout << "Fuse was not blown." << endl;
            cout << "Maximal power consumption was " << maxPower << " amperes." << endl;
        }
        cout << endl;

        
    }

}

