#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool flag = true;
    int start = 0;
    if(s[0] == '9')start = 1;
    for (int i = start; i < s.size(); i++)
    {
        
        if (s[i] > '4')
        {
            s[i] = (9 - (s[i] - '0')) + '0';
            

        }
    }
    cout << s << endl;
}