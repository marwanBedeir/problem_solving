#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n,m,tree[1000005];

bool ok(int x)
{
    long long tot=0;
    for(int i=0;i<n;i++)
    {
        if(tree[i]>x)
            tot+=(tree[i]-x);
    }
    return (tot>=m);
}

int main()
{
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d",tree+i);
    }
    int l = 0,r = 1000000005;
    while(l<r)
    {
        int mid=l+((r-l+1)>>1);
        if(ok(mid))
            l=mid;
        else
            r=mid-1;
    }
    printf("%d",l);
    return 0;
}
