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
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define mod 1000000007
#define pi acos(-1.0)
#define eps 1e-9
#define inf 1e18
#define endl "\n"
#define sz(second) (int)((second).size())
#define gcd(a, b) __gcd(a, b)
#define LCM(second, y) (((second) / __gcd((second), (y))) * (y))
#define mem(second, n) memset(second, n, sizeof(second))
#define setbits(second) __builtin_popcountll(second)
#define zrobits(second) __builtin_ctzll(second)
#define ps(second, y) fixed << setprecision(y) << second
#define All(second) (second).begin(), (second).end()
#define print(a) for (auto second : a) cout << second << " "; cout << endl
#define print1(a) for (auto second : a) cout << second.ff << " " << second.ss << endl
#define print2(a, second, y) for (int i = second; i < y; i++) cout<< a[i] << " "; cout << endl    
//**************************************************************************************************************************************************************************
char gap = 32;
template <typename T>
ostream &operator<<(ostream &os, const vector<T> &vec)
{
    os << '{';
    for (const auto &second : vec)
        os << gap << second;
    return os << '}';
}
template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p)
{
    return os << '(' << p.first << gap << p.second << ')';
}

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}

#ifndef ONLINE_JUDGE
#define dbg(...) cerr << '(' << #__VA_ARGS__ << ')' << ':', dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

typedef tree<int, null_type, less_equal<int>,
             rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;
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
    int numbre, second;
    cin >> numbre;
    vector<int> vec(110, 0);
    int mx = 0;
    bool flag = 0;
    for (int i = 0; i < numbre; i++)
    {
        cin >> second;
        mx = max(mx, second);
        vec[second]++;
    }
    for (int i = 1; i <= mx; i++)
    {
        if (vec[i - 1] < vec[i])
        {
            cout << "NO" << endl;
            flag = true;
            break;
        }
    }
    if (flag == 0)
        cout << "YES" << endl;

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
