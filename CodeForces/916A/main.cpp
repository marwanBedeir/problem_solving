#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,hh,mm,y,i;
    scanf("%d",&x);
    scanf("%d%d",&hh,&mm);

    for(i=0 ;;i++)
    {
        if(hh==7||hh%10==7||hh/10==7||mm==7||mm%10==7||mm/10==7)
            break;
        if(x<mm)
            mm-=x;
        else
        {
            y=x;
            while(y--)
            {
                if(mm==0&&hh!=0)
                {
                    mm=59;
                    hh--;
                }
                else if(mm==0)
                {
                    mm=59;
                    hh=23;
                }
                else
                    mm--;
            }
        }
    }
    printf("%d",i);
    return 0;
}
