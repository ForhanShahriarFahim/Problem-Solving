
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<string> vec(n);
    for (int i = 0; i < n; i++)
    {

        cin >> vec[i];
    }

    unordered_map<string, int> mapping ;

    string result = "";
    string s;
    for (int i = vec.size() - 1; i >= 0; i--)
    {
        s = vec[i];
        if (mapping .find(s) != mapping .end())
            continue;
        else
        {
            result += s[s.size() - 2];
            result += s[s.size() - 1];
            mapping [s]++;
        }
    }
    cout << result;

    return 0;
}