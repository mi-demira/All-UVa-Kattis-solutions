using namespace std;
#include <iostream>
#include <vector>

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int num;
        int allVote = 0;
        cin >> num;

        vector <int> votes;
        for (int i = 0;i < num;i++)
        {
            int v;
            cin >> v;
            votes.push_back(v);
            allVote += v;
        }

        int mostVotes=INT_MIN;
        int indexWinner;
        for (int i = 0;i < num;i++)
        {
            if (mostVotes < votes[i])
            {
                mostVotes = votes[i];
                indexWinner = i;
            }

        }

        indexWinner++;

        if (allVote / 2 < mostVotes)
        {
            cout << "majority winner " << indexWinner;
        }
        else if (allVote / num == mostVotes)
        {
            cout << "no winner" << endl;
        }
        else
        {
            cout << "minority winner " << indexWinner << endl;
        }
    }
}

