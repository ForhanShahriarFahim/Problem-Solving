#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#include <bits/stdc++.h>
using namespace std;
const ll N = 1000000;
bool prime[N + 1];

void SieveOfEratosthenes()
{

    memset(prime, true, sizeof(prime));

    for (ll p = 2; p * p <= N; p++)
    {

        if (prime[p] == true)
        {

            for (ll i = p * p; i <= N; i += p)
                prime[i] = false;
        }
    }
}
int main()
{

    SieveOfEratosthenes();
    int n;
    cin >> n;
    ll x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        ll sq = sqrt(x);
        if (x == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        if (sq * sq == x && prime[sq])
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}
