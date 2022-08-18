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
    string a, s;
    vector<int>v;
    cin>>a>>s;
    ll m = a.size()-1;
    ll n = s.size()-1;    
    ll inds = n;
    if(a == s)
    {
        cout<<0<<endl;
        return;
    }
    for(int i = m;i>=0;i--)
    {
        if (inds < 0)
        {
            cout << -1 << endl;
            return;
        }
        int x = a[i] - '0';
        
        int y = s[inds] - '0';
        if(x<=y)
        {
            v.pb(y-x);
            
            
        }
        else 
        {
            inds-- ;
            if (inds < 0 || s[inds]!='1')
            {
                cout << -1 << endl;
                return;
            }
            else 
            {
                y+=10;
                v.pb(y-x);
                dbg(v[0]);
            }           
            
        }
        /* if(a[i]>s[inds])
        {
            //dbg(s[inds]);
            inds--;
            if (inds < 0)
            {
                cout << -1 << endl;
                return;
            }
            num = ((s[inds] - '0')*10)+(s[inds+1] - '0');
            dbg(num);
            if(num>18 || inds<0)
            {
                cout<<-1<<endl;
                return;
            }
            else
            {
                b += (num - (a[i] - '0')) + '0'; 
                //dbg(b);                             
            }            
        }
        else 
        {
            b+= ((s[inds] - '0') - (a[i] - '0')) + '0';
            //dbg(b);            
        } */        
        inds--;        
    }
    
    for (int j = inds; j >= 0; j--)
    {
        v.pb(s[j] - '0');
    }
        
        //dbg(b[b.size() - 1]);
    for(int i = v.size()-1;i>0;i--)
    {
        if(v[i] == 0) v.pop_back();
        else break;
    }
    
    for(int i = v.size()-1;i>=0;i--)
    {
        cout<<v[i];
    }
    cout<<endl;
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
