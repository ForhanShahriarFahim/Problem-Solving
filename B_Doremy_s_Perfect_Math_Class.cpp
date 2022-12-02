#include <bits/stdc++.h>
using namespace std;


void c_p_c()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

const int N = 200005;

void solve()
{
    int n, variable;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

        variable = arr[0];
        for (int i = 1; i < n; i++)
        {
            variable = __gcd(variable, arr[i]);
        }
        
    
    cout << arr[n - 1] / variable << endl;
    
}

    int main(int argc, char const *argv[])
    {
        // c_p_c();
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
#ifndef ONLINE_JUDGE
#endif
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
    // cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
