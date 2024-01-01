#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int number;
        cin >> number;
        vector<string> vec;
        int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
        string str;
        for (int i = 0; i < number; i++)
        {
            cin >> str;
            if (str == "A")
            {
                cnt1++;
            }
            else if (str == "B")
            {
                cnt2++;
            }
            else if (str == "AB")
            {
                cnt3++;
            }
            else
            {
                cnt4++;
            }
            vec.push_back(str);
        }
        cout << (+max(cnt1, cnt2) + cnt4 + cnt3) << endl;
    }
    return 0;
}