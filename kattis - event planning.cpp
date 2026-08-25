using namespace std;
#include <iostream>

int main()
{
    int N, B, H, W;
    int fullPrice = 0;
    
    cin >> N >> B >> H >> W;

    int minPrice = INT_MAX;
    for (int i = 0; i < H;i++)
    {
        int priceP;
        cin >> priceP;

        for (int j = 0; j < W; j++)
        {
            int beds;
            cin >> beds;

          
            if(beds >=N)
            {
                fullPrice = beds * priceP;

                if (fullPrice < minPrice)
                    minPrice = fullPrice;
            }


        }
    }
    if (minPrice > B)
    {
        cout << "stay home" << endl;
    }
    else
    cout << minPrice << endl;
}

