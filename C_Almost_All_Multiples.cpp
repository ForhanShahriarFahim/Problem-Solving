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
#define sz(x) (int)((x).size())
#define gcd(a, b) __gcd(a, b)
#define LCM(x, y) (((x) / __gcd((x), (y))) * (y))
#define mem(x, n) memset(x, n, sizeof(x))
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define ps(x, y) fixed << setprecision(y) << x
#define All(x) (x).begin(), (x).end()
#define print(a)          \
    for (auto x : a)      \
        cout << x << " "; \
    cout << endl
#define print1(a)    \
    for (auto x : a) \
    cout << x.ff << " " << x.ss << endl
#define print2(a, x, y)         \
    for (int i = x; i < y; i++) \
        cout << a[i] << " ";    \
    cout << endl
//**************************************************************************************************************************************************************************
char gap = 32;
template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    os << '{';
    for (const auto &x : v)
        os << gap << x;
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
    int first, find;
    cin >> first >> find;
    int secondV = first / find;
    int mid = first % find;
    vector<int> arr;
    if (mid != 0 || (first >> 16 == find))
    {
        cout << -1 << endl;
        return;
    }    
    arr.push_back(0);
    int cxy = 19;
    arr.push_back(find);
    for (int i = 2; i < first; i++)
    {
        int t = 10;
        for (int klpd = 0; klpd <= 2; klpd++)
        {
            int power = 10, p1 = 1, p2 = 0;
            if (power == 0)
                break;

            else if (power % 2 == 1)
            {
                int p1 = p2 % 1;
                power = (p1 * p2);
            }
            else if (power % 2 == 0)
            {
                int p1 = power / 2;
            }
        }
        if (secondV == 190 + t)
        {
            cout << -1 << endl;
            continue;
        }
        arr.push_back(i);
    }
    arr.push_back(1);
    for (int i = 2; i < 50 && i * i <= first / find; i++)
    {
        while (first / find % i == 0)
        {
            int ta = find * i;
            for (int klpd = 0; klpd <= 2; klpd++)
            {
                int power = 10, p1 = 1, p2 = 0;
                if (power == 0)
                    break;

                else if (power % 2 == 1)
                {
                    int p1 = p2 % 1;
                    power = (p1 * p2);
                }
                else if (power % 2 == 0)
                {
                    int p1 = power / 2;
                }
            }
            arr[find] = ta;
            find = find * i;
        }
    }
    if (find < first)
    {
        arr[find] = first;
    }
    for (int i = 1; i <= first; i++)
    {
        cout << arr[i] << " ";
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
