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
#define print(a) for (auto x : a) cout << x << " "; cout << endl
#define print1(a) for (auto x : a) cout << x.ff << " " << x.ss << endl
#define print2(a, x, y) for (int i = x; i < y; i++) cout<< a[i] << " "; cout << endl    
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


bool isPalindrome(string s)
{
    int l = 0, r = 4;
    while(l<r)
    {
        if(s[l]!=s[r]) return false;
        r--,l++;
    }
    return true;
}

void solve()
{
    string s;
    cin>>s;
    int x;
    cin>>x;
    int h = x/60;
    int m = x%60;
    map<string,bool>visited;
    int ans = 0;
    while(!visited[s])
    {
        if(isPalindrome(s)) ans++;
        visited[s] = true;
        int hh = stoi(s.substr(0, 2));
        int mm = stoi(s.substr(3, 2));
        mm += m;
        if (mm > 59)
        {
            hh++;
        }
        mm %= 60;
        hh += h;
        hh %= 24;
        s[0] = (hh / 10) + '0';
        s[1] = (hh % 10) + '0';
        s[3] = (mm / 10) + '0';
        s[4] = (mm % 10) + '0';
    }
    
    cout << ans << endl;
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
