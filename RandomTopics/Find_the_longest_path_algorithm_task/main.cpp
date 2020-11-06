#include <iostream>
#include <bits/stdc++.h>

using namespace std;

char tarwesh[2] = {'-','.'}; // just for manzara 3ashan ana gamed gdan.

const int N=10e3+5; // big number and the input cannot to be bigger than it.
int n;
int mat[N][N],path[N],mypath[N];
int p[N];

void start(int x,int y,int prev = -1)
{
    p[mat[x][y]]= prev;
    if(~p[mat[x][y]]) // For special cases.
        path [mat[x][y]] = path [p[mat[x][y]]]+1;

    else
        path [mat[x][y]] = 1;

    if(mat[x][y]+1 == mat[x+1][y]) //To try every possible way.
        start(x+1,y,mat[x][y]);

    else if(mat[x][y]+1 == mat[x][y+1])
        start(x,y+1,mat[x][y]);

    else if(mat[x][y]+1 == mat[x-1][y])
        start(x-1,y,mat[x][y]);

    else if(mat[x][y]+1 == mat[x][y-1])
        start(x,y-1,mat[x][y]);
}

void find_the_longest_path()
{
    for(int i=0;i<n;i++) // To try every point I can start from it.
    {
        for(int j=0;j<n;j++)
        {
            if(!path[mat[i][j]])
                start(i,j);
        }
    }

    int maxp = 0,cpyOfmaxp;  // Now I have the answer i just want to bring it out from arrays.
    for(int i=1;i<N;i++)
    {
        if(path[i] > path[maxp])
            maxp = i;
    }
    printf("\n%d\n",path[maxp]); // Now print it

    cpyOfmaxp=maxp;

    mypath[0] = maxp;

    for(int i=1;i < path[maxp];i++,cpyOfmaxp--)
    {
        if(~p[cpyOfmaxp])
            mypath[i]= p[cpyOfmaxp];
        else
            break;
    }

    printf("The longest path is ");

    for(int i = path[maxp]-1 ;i >= 0;i--)
    {
       printf("%d%c",mypath[i],tarwesh[i==0]); // tarwesh for good style to the answer.
    }
    printf("\n\n");
}

int main()
{
    scanf("%d",&n);

    for(int i=0;i<n;i++) //Take the input.
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    find_the_longest_path(); // lets start.
    return 0;
}
