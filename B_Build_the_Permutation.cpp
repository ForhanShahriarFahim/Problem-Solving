#include <bits/stdc++.h>

using namespace std;
//**************************************************************************************************************************************************************************
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
//**************************************************************************************************************************************************************************
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define pi acos(-1.0)
#define eps 1e-9
#define inf 1e18
#define sz(x) (int)((x).size())
#define gcd(a, b) __gcd(a, b)
#define LCM(x, y) (((x) / __gcd((x), (y))) * (y))
#define mem(x, n) memset(x, n, sizeof(x))
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define ps(x, y) fixed << setprecision(y) << x
#define All(x) (x).begin(), (x).end()
//**************************************************************************************************************************************************************************

void c_p_c()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void solve()
{
    ll n, u, d, e;
    cin >> n >> u >> d;
    // ll arr[n];
    if ((u + d > n - 2 || abs(u - d) > 1))
    {
        cout << -1 << endl;
        return;
    }

    if (u == 0 && d == 0)
    {
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
        return;
    }
    // cout<<u<<" "<<d<<endl;

    // if(u == 1 && d == 0)
    // {
    //     cout<<"1 "<<"3 "<<"2 ";
    //     for(int i = 4;i<=n;i++)
    //     {
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    //     return;
    // }
    // if(u == 0 && d == 1)
    // {

    //     cout<<"2 "<<"1 "<<"3 ";
    //     for(int i = 4;i<=n;i++)
    //     {
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    //     return;
    // }

    if (u > d)
    {
        ll x = u + d + 1;
        for (int i = 0; i < n - x; i++)
        {
            cout << i + 1 << " ";
        }
        for (int i = n - x + 1; i < n; i += 2)
        {
            cout << i + 1 << " " << i << " ";
        }
        cout << endl;
    }
    else if (d > u)
    {
        ll x = u + d + 1;
        for (int i = 1; i < x; i += 2)
        {
            cout << i + 1 << " " << i << " ";
        }
        for (int i = x; i < n; i++)
        {
            cout << i + 1 << " ";
        }

        cout << endl;
    }
    else
    {
        ll x = u + d;
        for (int i = 1; i <= x; i += 2)
        {
            cout << i + 1 << " " << i << " ";
        }
        for (int i = x + 1; i <= n - 2; i++)
        {

            cout << i << " ";
        }
        cout << n << " " << n - 1 << endl;
    }
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
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
