#include <bits/stdc++.h>

using namespace std;

const int maximum = 9e5 + 10;

typedef long long ll;
#define pb push_back

ll u, it, middle;
ll number, query;

ll degreeOF[maximum];
bool vis[maximum];

vector<int> adjacent[maximum];

void depthFirst(int first, int leaf = -1)
{
    if (adjacent[first].size() == 1 && first != 1)
        degreeOF[first] = 1;
    for (auto it : adjacent[first])
    {
        if (it != leaf)
            depthFirst(it, first), degreeOF[first] += degreeOF[it];
    }
}

int main()
{

    int test;
    cin >> test;
    while (test--)
    {
        cin >> number;
        for (int i = 1; i <= number; i++)
        {
            adjacent[i].clear();
             degreeOF[i] = 0;
        }
            
        for (int i = 1; i < number; i++)
        {
            cin >> u >> it;
            adjacent[u].pb(it);
             adjacent[it].pb(u);
        }
        
        depthFirst(1);
        cin >> query;
        while (query--)
        {
            cin >> u >> it;
            cout << degreeOF[u] * degreeOF[it] << endl;
        }
    }
}