// Coded by MMB (LOL :xD)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void solve();
void Try(int x);
bool check(int x,int y);

int n,k,row[300],mat[300][300],maxr,col[300],Count,UsedOfk;

int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>row[i];
        if(maxr<row[i])
            maxr=row[i];
    }
    solve();
    return 0;
}

void solve()
{
    for(int i=0;i<n;i++)
    {
        for(int j = 0; j<maxr;j++)
        {
            if(j >= row[i])
                mat[i][j] = 1;
        }
    }

    Try(0);

    printf("%d",Count);
}

void Try(int x )
{
    int flag;
    if(k1 == k)
    {
        Count++;
        return;
    }
    if(x == n)
        return;

    Try(x+1); // »Ã—» «ﬂ‰Ì „«Õÿ ‘ ÿ«»ÌÂ ›Ì «·’› œÂ

    for(int i=0;i<maxr;i++) // »Ã—» ﬂ· «·«„«ﬂ‰ ›Ì «·’› œÂ «··Ì Ì‰›⁄ «Õÿ ›ÌÂ« ÿ«»ÌÂ
    {
        flag = 1;
        if(check(x,i))
        {
            UsedOfk++;// ⁄‘«‰ «⁄—› «‰Ì ÕÿÌ  ÿ«»ÌÂ
            if(UsedOfk == k)
            {
                Count++;
                flag = 0; // ⁄‘«‰ „«ÌœŒ·‘ ›Ì «·›«‰ﬂ‘‰ ›«Ì“Êœ «·⁄œ«œ  «‰Ì ⁄·Ì «·›«÷Ì
            }
            if(flag)
            {
                col[i]=1; //mark
                Try(x+1);
                col[i]=0; //unmark
            }
            UsedOfk--; // »‘Ì· «·ÿ«»ÌÂ «··Ì ÕÿÌ Â«
        }
    }
}

bool check(int x,int y)
{
    if(mat[x][y])
        return false;
    if (col[y])
        return false;
    return true;
}
