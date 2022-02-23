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
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//**************************************************************************************************************************************************************************

void c_p_c()
{
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif   
}

void computeLPSArray(char *pat, int m, int *lps)
{
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while (i < m)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len!= 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}
void KMPSearch(char* pat, char* txt)
{
    int m = strlen(pat);
    int n = strlen(txt);
    int lps[m];

    computeLPSArray(pat, m, lps);
    int i = 0;
    int j = 0;
    while(i<n)
    {
        if(pat[j] == txt[i])
        {
            i++;
            j++;
        }

        if(j == m)
        {
            cout<<"Found the pattern at index: "<<i-j<<endl;
            j = lps[j-1];
        }

        else if(i<n && pat[j]!= txt[i])
        {
            if(j!=0)
            {
                j = lps[j-1];
            }
            else    
                i++;
        }

    }

}



int main(int argc, char const *argv[])
{
    //c_p_c();    
    FastIO;
    char txt[] = "ABABDABACDABABCABAB";
    char pat[] = "ABABCABAB";
    KMPSearch(pat, txt);
}

