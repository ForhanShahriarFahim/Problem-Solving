
#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define endl '\n'

signed main()
{
    

    int maximumN = 1e6 + 1;
    vector<int> primeNumber, leftPerFul(maximumN);
    vector<bool> primeChecker(maximumN, true);
    primeChecker[0] = primeChecker[1] = false;
    for (int i = 2; i < maximumN; i++)
    {
        if (primeChecker[i])
        {
            primeNumber.push_back(i);
            leftPerFul[i] = i;
            for (int j = i * i; j < maximumN; j += i)
            {
                primeChecker[j] = false;
                leftPerFul[j] = i;
            }
        }
    }
    int test = 1;
    cin >> test;
    while(test--)
    {
        int number, missionX, gravity = 0;
        cin >> number >> missionX;
        vector<int> arrya(number);
        for (int i = 0; i < number; i++)
            cin >> arrya[i], gravity = __gcd(gravity, arrya[i]);

        unordered_set<int> sattam(arrya.begin(), arrya.end());
        if (sattam.size() == 1)
        {
            cout << 0 << endl;
            continue;
        }

        unordered_set<int> possibility;
        for (int i = 0; i < number; i++)
        {
            int t = arrya[i];
            while (t > 1)
            {
                int f = leftPerFul[t];
                possibility.insert(f);
                while (t % f == 0)
                    t /= f;
            }
        }
        set<int> goupt;
        while (gravity > 1)
        {
            int f = leftPerFul[gravity];
            goupt.insert(f);
            while (gravity % f == 0)
                gravity /= f;
        }

        if (!goupt.empty() && *goupt.begin() <= missionX)
        {
            cout << 1 << endl;
            cout << *goupt.begin() << endl;
        }
        else
        {
            bool flag = false;
            int prifilePicture = upper_bound(primeNumber.begin(), primeNumber.end(), missionX) - primeNumber.begin();
            for (int i = prifilePicture - 1; i >= 0; i--)
            {
                if (possibility.find(primeNumber[i]) == possibility.end())
                {
                    cout << 1 << endl;
                    cout << primeNumber[i] << endl;
                    flag = true;
                    break;
                }
            }
            if (flag)
                continue;
            cout << "2\n2 3" << endl;
        }
    }
}