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

void solve()
{
    int n, cnt = 0;
    bool flag = true, odd_position = false, even_position = false;
    string s;
    char ch;
    vector<int>v;
    cin>>n>>ch>>s;
    for(int i = 0;i<s.size();i++)
    {        
        if(s[i]!=ch && (i+1)%2!=0) odd_position = true;
        else if(s[i]!=ch && (i+1)%2 == 0)
        {
            even_position = true;
            v.pb(i+1);
        }   
    }
    if(!odd_position && !even_position)
    {
        cout<<0<<endl;
        return;
    }
    else if(odd_position && !even_position)
    {
        cout<<1<<endl;
        cout<<2<<endl;
        return;
    }
    /* else if(!odd_position && even_position)
    {   
        if(s[s.size()-1] == ch)
        {
            cout<<1<<endl;
            cout<<n<<endl;
        }
        else 
        {
            bool possible = false;
            int div = n/2;
            if(div%2 == 0) div++;
            for(int i = 0;i<v.size();i++)
            {
                if(v[i]%div == 0) possible = true;
            }
            if(possible && v.size()>1)
            {                
                cout<<2<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
            else 
            {
                cout<<1<<endl;
                cout<<div<<endl;
            }
        }
    }
    else if(odd_position && even_position)
    {
        dbg(2);
        cout<<2<<endl;
        cout<<n<<" "<<n-1<<endl;
    } */
    else 
    {
        int div = (n/2)+1;
        dbg(div);
        for(int i = div;i<=n;i++)
        {
            if(s[i-1] == ch)
            {
                cout<<"1\n"<<i<<endl;
                return;
            }
            dbg(i);
        }
        cout<<2<<endl;
        cout<<n-1<<" "<<n<<endl;
        
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
