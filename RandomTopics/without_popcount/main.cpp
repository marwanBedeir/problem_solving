#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int pop_count(int x)
{
    int c = 0;

    do{
         c+=(x&1);
    }while(x>>=1);

    return c;
}
int main()
{
    int N,M,count1=0;

    scanf("%d%d",&N,&M);
    for(int i=1;i<=M;i++)
    {
        if(N==pop_count(i))
            count1++;
    }
    printf("%d",count1);
    return 0;
}
