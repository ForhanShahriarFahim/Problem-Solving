#include <bits/stdc++.h>
using namespace std;

#define ll long long

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

ll m = 1e9 + 7;

int main()
{


    int test;
    cin >> test;
    while (test--)
    {

        ll number , kth;
        cin >> number  >> kth;
        ll vec[number ][number ];
        for (int i = 0; i < number ; i++)
        {
            for (int j = 0; j < number ; j++)
            {
                cin >> vec[i][j];
            }
        }
        ll counter = 0; 

        if (number  == 1)
        {
            cout << "YES"<<endl;
            continue;
        }
        for (int i = 0; i < number /2; i++)
        {
            for (int j = 0; j < number ; j++)
            {
                if (vec[i][j] == vec[number  - i - 1][number  - j - 1])
                {

                }           
                    
                else
                    counter++;
            }
        }

        if (number  & 1)
        {
            int k = number/2;
            for (int j = 0; j < k; j++)
            {
                if (vec[k][j] == vec[k][number  - j - 1])
                    ;
                else
                    counter++;
            }
        }
        if (counter > kth)
            cout << "NO\n";
        else
        {
            kth -= counter;
            if (kth % 2 == 0 || (number  & 1))
            {

                cout << "YES"<<endl;
            }
            else
            {

                cout << "NO\n";
            }
        }
    }
    return 0;
}
