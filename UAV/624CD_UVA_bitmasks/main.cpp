#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int area,best = 0;
    while(cin>>area)
    {
        int n,sum_ans = 0,cou_ans = 0;
        int arr[25];

        scanf("%d",&n);

        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<(1<<n);i++)
        {
            int sum=0,cou=0;
            for(int j=0;j<n;j++)
            {
                if((i>>j)&1)
                {
                    sum+=arr[j];
                    cou++;
                }
            }
            if(sum>area)
                continue;
            if(sum>sum_ans||(sum==sum_ans&&cou>cou_ans))
            {
                sum_ans = sum;
                cou_ans = cou;
                best = i;
            }
        }
        for(int i=0;i<n;i++)
        {
            if((best>>i)&1)
                printf("%d ",arr[i]);
        }
        printf("sum:%d\n",sum_ans);
    }
    return 0;
}
