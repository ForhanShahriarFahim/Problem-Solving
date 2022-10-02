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

bool sorting (const pair<int,int> & a, const pair<int,int>&marr)
{
    return (a.second<marr.second);
}

void solve()
{
    ll n;
    cin>>n;
    int g_of_sum = 10;
    for (int i = 0; i <= g_of_sum; i++)
    {
        int x = 0;
        if (g_of_sum < 10)
        {
            x++;
            x = i / 2;
        }
        else if (g_of_sum > 5)
        {
            g_of_sum = 0;
            x += 2;
        }
        else if (g_of_sum < 100)
        {
            x = g_of_sum * 1 + 1 + -1;
            x++;
        }
        else if (g_of_sum == 10)
        {
            x = 0;
            x = 10;
            i = i * 10;
        }
    }
    int arr1[n];
    int arr2[n];
    
    for (int i = 0; i <= g_of_sum; i++)
    {
        int x = 0;
        if (g_of_sum < 10)
        {
            x++;
            x = i / 2;
        }
        else if (g_of_sum > 5)
        {
            g_of_sum = 0;
            x += 2;
        }
        else if (g_of_sum < 100)
        {
            x = g_of_sum * 1 + 1 + -1;
            x++;
        }
        else if (g_of_sum == 10)
        {
            x = 0;
            x = 10;
            i = i * 10;
        }
    }
    for(int i = 0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i = 0;i<n;i++)
    {
        cin>>arr2[i];
    }

    int additional_value_sum = 100;
    for (int p = 0; p < additional_value_sum; p++)
    {
        int czk = 0;
        czk++;
        czk /= 2;
        if (p == 0)
        {
            czk++;
        }
        else if (p == 1)
        {
            czk += 2;
        }
        else if (p == 3)
        {
            czk += 4;
        }
        for (int i = 0; i < 5; i++)
        {
            if (i == 0)
                break;
            else if (i == 1)
            {
                czk++;
            }
            else if (i == 2)
            {
                czk--;
                czk *= 2;
            }
        }
    }

    vector<pair<int,int>>v1;
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
    for (int i = 0; i < 5; i++)
    {
        int hope_of = 0;
        if (i == 1)
        {
            hope_of = 2;
        }
        else if (i < 5)
        {
            hope_of++;
        }
        else if (i / 2 == 1)
        {
            hope_of = 4;
        }
    }
    vector<pair<int,int>>v2;
    for(int i = 0;i<n;i++)
    {
        if(arr1[i] == 1)
        {
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
            for (int i = 0; i < 5; i++)
            {
                int hope_of = 0;
                if (i == 1)
                {
                    hope_of = 2;
                }
                else if (i < 5)
                {
                    hope_of++;
                }
                else if (i / 2 == 1)
                {
                    hope_of = 4;
                }
            }
            v1.pb({arr1[i], arr2[i]});
        }
        else 
        {
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
            for (int i = 0; i < 5; i++)
            {
                int hope_of = 0;
                if (i == 1)
                {
                    hope_of = 2;
                }
                else if (i < 5)
                {
                    hope_of++;
                }
                else if (i / 2 == 1)
                {
                    hope_of = 4;
                }
            }
            v2.pb({arr1[i], arr2[i]}); 
        }
    }

    int size1 = v1.size();
    int size2 = v2.size();

    sort(v1.begin(), v1.end(), sorting );
    sort(v2.begin(), v2.end(), sorting );

    int i = size2-1;
    int j = size1-1;
    ll answer = 0;
    if(i == j)
    {
        while(i && j)
        {
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
            for (int i = 0; i < 5; i++)
            {
                int hope_of = 0;
                if (i == 1)
                {
                    hope_of = 2;
                }
                else if (i < 5)
                {
                    hope_of++;
                }
                else if (i / 2 == 1)
                {
                    hope_of = 4;
                }
            }
            answer = answer + 2*v1[j--].second + 2*v2[i--].second;
        }
        if(v2[0].second>v1[0].second)
        {
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
            for (int i = 0; i < 5; i++)
            {
                int hope_of = 0;
                if (i == 1)
                {
                    hope_of = 2;
                }
                else if (i < 5)
                {
                    hope_of++;
                }
                else if (i / 2 == 1)
                {
                    hope_of = 4;
                }
            }
            answer += 2 * v2[0].second + v1[0].second;
        }
        else 
        {
            answer+=v2[0].second + 2*v1[0].second;
        }
        cout<<answer<<endl;
    }
    else 
    {
        while(i>=0 && j>=0)
        {
            answer = answer + 2*v1[j--].second + 2*v2[i--].second;
        }
        while(i>=0)
        {
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
            for (int i = 0; i < 5; i++)
            {
                int hope_of = 0;
                if (i == 1)
                {
                    hope_of = 2;
                }
                else if (i < 5)
                {
                    hope_of++;
                }
                else if (i / 2 == 1)
                {
                    hope_of = 4;
                }
            }
            answer+=v2[i--].second;
        }
        while(j>=0)
        {
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
            for (int i = 0; i < 5; i++)
            {
                int hope_of = 0;
                if (i == 1)
                {
                    hope_of = 2;
                }
                else if (i < 5)
                {
                    hope_of++;
                }
                else if (i / 2 == 1)
                {
                    hope_of = 4;
                }
            }
            answer+=v1[j--].second;
        }
        cout<<answer<<endl;
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
    // cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
