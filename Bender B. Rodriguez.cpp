using namespace std;
#include <string>
#include <iostream>

int main()
{ 
int L;

while (cin >> L && L != 0) 
{
    //pochvame ot +x
    string dir = "+x";

    for (int i = 0; i < L - 1; i++)
    {
        //na vseki i - komanda
        string cmd;
        cin >> cmd;

        //produljavame kum sledvashta iteraciq
        if (cmd == "No") 
            continue;

        if (dir == "+x")
            dir = cmd;
        else if (dir == "-x")
        {
            if (cmd == "+y") dir = "-y";
            else if (cmd == "-y") dir = "+y";
            else if (cmd == "+z") dir = "-z";
            else if (cmd == "-z") dir = "+z";
        }
        else if (dir == "+y") 
        {
            if (cmd == "+y") dir = "-x";
            else if (cmd == "-y") dir = "+x";
        }
        else if (dir == "-y")
        {
            if (cmd == "+y") dir = "+x";
            else if (cmd == "-y") dir = "-x";
        }
        else if (dir == "+z")
        {
            if (cmd == "+z") dir = "-x";
            else if (cmd == "-z") dir = "+x";
        }
        else if (dir == "-z") {
            if (cmd == "+z") dir = "+x";
            else if (cmd == "-z") dir = "-x";
        }
    }

    cout << dir << endl;
}
