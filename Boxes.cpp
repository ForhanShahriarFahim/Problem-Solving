#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        vector<ll> arr;
        map<int, int> mp;
        int n;
        cin >> n;
        ll vec[n+1];
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];

        }

        sort(vec,vec+n);

        int variable;
        for (int i = 0; i < n; i++)
        {
            variable = log2(vec[i]) + 1;
            mp[variable]++;
            arr.push_back(variable);
        }

        sort(arr.begin(), arr.end());
        int result = mp[arr[arr.size() - 1]];
        int value = result+1;
        cout << value / 2 << endl;
    }

    return 0;
}