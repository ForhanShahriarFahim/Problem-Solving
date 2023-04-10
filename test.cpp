#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int x1 = -1, y1 = -1, x2 = -1, y2 = -1, x3 = -1, y3 = -1;

        cout << "? " << n / 2 << " " << m / 2 << endl;
        cin >> x1 >> y1;

        if (n % 2 == 0)
        {
            cout << "? " << n / 2 + 1 << " " << m / 2 << endl;
            cin >> x2 >> y2;
        }
        else
        {
            cout << "? " << n / 2 + 1 << " " << m / 2 << endl;
            cin >> x2 >> y2;
            cout << "? " << n / 2 << " " << m / 2 + 1 << endl;
            cin >> x3 >> y3;
        }

        int x, y;
        if (x1 + x2 + x3 <= 2 * (n + m) - 2 - x1 - x2 - x3)
        {
            x = n - x1;
            y = m - y1;
        }
        else if (n % 2 == 0 && x1 + x2 + x3 >= 2 * (n + m) - 2 - x1 - x2 - x3 + 2)
        {
            x = n - x2;
            y = m - y2;
        }
        else if (n % 2 == 1 && x1 + x2 + x3 >= 2 * (n + m) - 2 - x1 - x2 - x3 + 1)
        {
            x = n - x2;
            y = m - y2;
        }
        else
        {
            x = n - x3;
            y = m - y3;
        }

        cout << "! " << x << " " << y << endl;
        fflush(stdout);
    }
    return 0;
}