using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    //num contestants, tasks, philips id
    int N, T, P;

    cin >> N >> T >> P;

    vector<vector<int>> taskSolve;

    //every contestant
    for (int i = 0; i < N;i++)
    {
        vector<int> contestant;
        //tasks
        for (int j = 0; j < T;j++)
        {
            int result;
            cin >> result;

            contestant.push_back(result);
        }

        taskSolve.push_back(contestant);
    }

    //how much every task is - points
    vector <int> pointsT(T);

    //sum
    for (int i = 0; i < T;i++)
    {
        //tasks
        for (int j = 0;j < N;j++)
        {
            if (taskSolve[j][i] == 0)
                pointsT[i]++;
        }
       
    }

    //summing points of every single contestant
    vector <int> allP(N);
    //kolko czadachi sa resheni
    vector<int> solved(N);
    for (int i = 0; i < N;i++)
    {
        for (int j = 0; j < T; j++)
        {
            if (taskSolve[i][j] == 1)
            {
                allP[i] += pointsT[j];
                solved[i]++;

            }
        }
    }

    //ranking
    //namirame kude tochno se namira philip
    int Pscore = allP[P - 1];
    //priemame che pochva bez nikoi da e pred nego
    int rank = 1;

    //preminavame prez vseki kontestant
    for (int i = 0; i < N;i++)
    {
        //za da propusnem Philip
        if (allP[P - 1] == i)
            continue;

        //higher score
        if (allP[i] > Pscore)
        {
            rank++;
        }
        //same score
        else if (allP[i] == Pscore)
        {
            if (solved[i] > solved[P - 1])
            {
                rank++;
            }
            //equal solved tasks, based on ID
            else if (solved[i] == solved[P - 1] && i < P - 1)
            {
                rank++;
            }

        }
    }

    cout << Pscore << " " << rank;

}
