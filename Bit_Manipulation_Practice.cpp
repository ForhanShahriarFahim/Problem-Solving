#include<bits/stdc++.h>
using namespace std;
void clearBtwRange (int &n, int i, int j)
{
    int a = (~0)<<(j+1);
    int b = (1<<i)-1;
    int mask = a|b;
    n = n&mask;
}


void setBtwRange(int &n, int i, int j)
{
    int mask = (1<<(j-i+1))-1;
    mask<<=i;
    n|=mask;
}

void replaceBits(int &n,int i,int j, int m)
{
    clearBtwRange(n,i,j);
    int mask = (m<<i);
    n|=mask;
}
int count_bits(int n)
{
    int count = 0;
    while(n>0)
    {
        count+=(n&1);
        n>>=1;
    }
    return count;
}
int setBits(int n)
{
    int count = 0;
    while(n>0)
    {
        n=(n&(n-1));
        count++;

    }
    return count;
}

int convertToBinary(int n)
{
    int ans = 0;
    int p =1;
    while(n>0)
    {
        int last_bit = n&1;
        ans += last_bit*p;
        p*=10;
        n>>=1;

    }
    return ans;
}
int main()
{
    /* int n = 15;
    int j =3;
    int i = 1;
    int m = 2;
    //setBtwRange(n,i,j);
    replaceBits(n,i,j,m); */
    int n = 10;
   // cout<<setBits(n);
   cout<<convertToBinary(n);
   // cout<<n<<endl;
}