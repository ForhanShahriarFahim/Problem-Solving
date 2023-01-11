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
    int num;
    cin >> num;
    int arr[num], x[num + 1], y[num + 1], result = 0, first[num], second[num];
    set<int> set1, set2;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
        x[i + 1] = -1;
        y[i + 1] = -1;
    }

    
    memset(first, 0, num * sizeof(int));
    memset(second, 0, num * sizeof(int));

    
    for (int i = 0; i < num; i++)
    {
        if (x[arr[i]] == -1)
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
            x[arr[i]] = i;
            first[i] = arr[i];
        }
        else if (y[arr[i]] == -1)
        {
            y[arr[i]] = i;
            second[i] = arr[i];

            
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
            
    }
    

    for (int i = 0; i < num; i++)
    {
        if (x[i + 1] == -1)
        {
            set1.insert(i + 1);
        }
            
        if (y[i + 1] == -1)
        {
            set2.insert(i + 1);
        }
            
    }

    for (int i = 0; i < num; i++)
    {
        if (first[i] == 0)
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
            auto it = set1.upper_bound(second[i]);
            if (it == set1.begin())
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                it--;
                first[i] = *it;
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
                set1.erase(it);
            }
        }
        else
        {
            auto it = set2.upper_bound(first[i]);
            if (it == set2.begin())
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                it--;
                second[i] = *it;
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
                set2.erase(it);
            }
        }
    }
    
    cout << "YES" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << first[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < num; i++)
    {
        cout << second[i] << " ";
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
