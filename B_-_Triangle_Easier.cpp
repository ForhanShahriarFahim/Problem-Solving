#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,E;
    cin>>N>>E;
    int u,v;
    vector<vector<bool>>graph(N+1, vector<bool>(N+1,false));
    for(int i=0;i<E;i++)
    {
        cin>>u>>v;
        graph[u][v] = true;
        graph[v][u] = true;
    }
    int sum = 0;
    for(int i=1;i<=N;i++)
    {
        for(int j=i+1;j<=N;j++)
        {
            for(int k=j+1;k<=N;k++)
            {
                if(graph[i][j] && graph[j][k] && graph[k][i])
                {
                    sum++;
                }
            }
        }
    }
    cout<<sum<<endl;
}