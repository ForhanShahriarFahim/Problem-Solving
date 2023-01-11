#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Read in the number of test cases
    int t;
    cin >> t;

   
        // Process each test case
        while (t--)
    {
        // Read in the number of stations and queries
        int n, k;
        cin >> n >> k;

        // Read in the station indices and store them in a map
        map<int, pair<int,int>> mp;
        for (int i = 0; i < n; i++)
        {
            int u;
            cin >> u;
            if(!mp.count(u))
            {
                mp[u].first = i;
                mp[u].second = i;
            }
            else 
                mp[u].second = i;
        }

        // Process each query
        for (int i = 0; i < k; i++)
        {
            // Read in the query
            int a, b;
            cin >> a >> b;

            // Check if it is possible to travel from station a to station b
            if (mp.count(a) > 0 && mp.count(b) > 0 && mp[a].first < mp[b].second)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}