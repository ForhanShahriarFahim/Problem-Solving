#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i = 0;i<s.size();i++)
    {
        if(s[0] == '9')continue;
        else if(s[i]>'4') s[i] = (9-(s[i]-'0'))+'0';
    }
    cout<<s<<endl;
}