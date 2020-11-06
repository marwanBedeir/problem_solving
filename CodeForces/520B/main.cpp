#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n,m,dis[10005];

void BFS(int u = n)
{
    memset(dis,-1,sizeof dis);
    queue <int> q;
    q.push(u);
    dis[u]=0;

    while(q.size())
    {
        int x = q.front();
        q.pop();
        if(x == m)
            return;
        if(dis[x-1]==-1){
            q.push(x-1);
            dis[x-1]=dis[x]+1;
        }
        if(dis[x*2]==-1){
            q.push(x*2);
            dis[x*2]=dis[x]+1;
        }

    }

}

int main()
{
    scanf("%d%d",&n,&m);

    BFS();

    printf("%d",dis[m]);
    return 0;
}
