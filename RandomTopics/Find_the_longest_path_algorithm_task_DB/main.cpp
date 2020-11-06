#include <iostream>
#include <bits/stdc++.h>

using namespace std;

char tarwesh[2] = {'-','.'}; // just for manzara 3ashan ana gamed gdan.

const int N=10e3+5; // big number and the input cannot to be bigger than it.
int n;
int mat[N][N],path[N];

int explor(int x,int y)
{
    if(mat[x][y]+1 == mat[x+1][y]){ //To try every possible way.
        if(!path[mat[x+1][y]]){  // this if for DP.
            path[mat[x+1][y]] = explor(x+1,y);
            }
        return (1 + path[mat[x+1][y]]);
        }

    else if(mat[x][y]+1 == mat[x][y+1]){
        if(!path[mat[x][y+1]]){
            path[mat[x][y+1]] = explor(x,y+1);
            }
        return (1+path[mat[x][y+1]]);
        }

    else if(mat[x][y]+1 == mat[x-1][y]){
        if(!path[mat[x-1][y]]){
            path[mat[x-1][y]] = explor(x-1,y);
            }
        return (1+path[mat[x-1][y]]);
        }

    else if(mat[x][y]+1 == mat[x][y-1]){
        if(!path[mat[x][y-1]]){
            path[mat[x][y-1]] = explor(x,y-1);
            }
        return (1+path[mat[x][y-1]]);
        }

    else
        return 1;

}

void find_the_longest_path()
{
    for(int i=0;i<n;i++) // To try every point I can start from it.
    {
        for(int j=0;j<n;j++)
        {
            if(!path[mat[i][j]]) // Do not start again from point I pass from it before from another start point .
                path [mat[i][j]] = explor(i,j);
        }
    }

    int maxp = 0;  // Now I have the answer i just want to bring it out from arrays.
    for(int i=1;i<N;i++)
    {
        if(path[i] > path[maxp])
            maxp = i;
    }

    int cpymaxp = maxp; // To use it without change the original value.

    printf("\n%d\n",path[maxp]); // Now print it

    printf("The longest path is ");

    for(int i = 0 ;i < path[maxp];i++)
    {
       printf("%d%c",cpymaxp++,tarwesh[i==(path[maxp]-1)]); // tarwesh just for good style in printing.
    }
    printf("\n\n");

    system("pause");
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
