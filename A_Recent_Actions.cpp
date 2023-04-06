#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
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
#define m make_pair
#define pb push_back
#define ff first
#define ss second
#define mod 1000000007
#define pi acos(-1.0)
#define eps 1e-9
#define inf 1e18
#define endl "\n"
#define sz(x) (int)((x).size())
#define gcd(a, b) __gcd(a, b)
#define LCM(x, y) (((x) / __gcd((x), (y))) * (y))

//*************************************************************************************************************************************************************************

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
    ll n, m;
    cin >> n >> m;
    ll counter  = n;
    map<ll, ll> finderM;
    vector<ll> vec(m);
    for (int i = 0; i < m; i++)
    {
        cin >> vec[i];
    }
        
    
    for (int i = 1; i <= n; i++)
    {
        finderM[i] = -1;
    }
        
    int flg = 1;
    for (int i = 0; i < m; i++)
    {
        if (counter  == 0)
        {

            break;
        }
        if (finderM.find(vec[i]) == finderM.end())
        {
            finderM[vec[i]] = 1;
            finderM[counter ] = flg;
            counter --;
        }
        flg++;
    }
    for(int i = 0;i<3;i++)
    {
        int t=0;
        t++;
    }
    for (auto it : finderM)
    {
        if (it.first <= n)
        {

            cout << it.second << " ";
        }
    }

    cout << endl;
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
