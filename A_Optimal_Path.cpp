#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int m,n;
        cin>>m>>n;
        long long int sum = n*(n+1)/2;

        long long int sum1 = n,sum2=0;
        
        while(m>1)
        {
            sum1+=n;
            sum2+=sum1;
            m--;
        }
        cout<<sum+sum2<<endl;
    }
}