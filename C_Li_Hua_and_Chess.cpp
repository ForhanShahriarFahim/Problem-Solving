#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cout.flush();
        int first, second;
        int difx, dify;
        cin >> first >> second;

        int start1 = -1, stop1 = -1, start2 = -1, stop2 = -1, middle3 = -1, ymiddle3 = -1;

        cout << "? " << first / 2 << " " << second / 2 << endl<<flush;
        //cout.flush();

        cin >>start1 >> stop1;

        if (first % 2 == 0)
        {
            int temp1 = first / 2 + 1;
            int temp2 = second / 2;
            cout << "? " << temp1 << " " << temp2 << endl<<flush;
            //cout.flush();
            cin >>start2 >> stop2;
        }
        else
        {
            int temp1 = first / 2 + 1;
            int temp2 = second / 2;
            cout << "? " << temp1 << " " << temp2 << endl<<flush;
            //cout.flush();
            cin >> start2 >> stop2;
            int temp3 = first / 2;
            int temp4 = second / 2 + 1;
            cout << "? " << temp3 << " " << temp4 << endl<<flush;
            //cout.flush();
            cin >> middle3 >> ymiddle3;
        }
        long long int store3 = start1 + start2 + middle3;
        long store2 = first + second;
        if (store3 <= 2 * (store2)-2 - start1 - start2 - middle3)
        {
            difx = first - start1;
            dify = second - stop1;
        }
        else if (first % 2 == 0 && store3 >= 2 * (store2)-2 - start1 - start2 - middle3 + 2)
        {
            difx = first - start2;
            dify = second - stop2;
        }
        else if (first % 2 == 1 && store3 >= 2 * (store2)-2 - start1 - start2 - middle3 + 1)
        {
            difx = first - start2;
            dify = second - stop2;
        }
        else
        {
            difx = first - middle3;
            dify = second - ymiddle3;
        }
        cout << "! " << difx << " " << dify << endl<<flush;
        //cout.flush();
    }
    return 0;
}