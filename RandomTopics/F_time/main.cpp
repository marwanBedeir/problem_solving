#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int LD=-1,LR=-1,pass,shortpass=1000000000,n;

    while(scanf("%d",&n),n){
        scanf("%s",s);
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='R'&&LD!=-1)
            {
                pass=i-LD;
                LR=i;
            }
            else if(s[i]=='D'&&LR!=-1)
            {
                pass=i-LR;
                LD=i;
            }
            else if(s[i]=='R')
                LR=i;
            else if(s[i]=='D')
                LD=i;
            else if(s[i]=='Z')
            {
                shortpass=0;
                break;
            }
            if(pass<shortpass)
                shortpass=pass;
        }
        printf("%d",shortpass);
    }
    return 0;
}
