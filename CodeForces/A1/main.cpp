#include <iostream>

using namespace std;

int main()
{
    long unsigned n,m,a,x;
    long long unsigned y;

    cin>>n>>m>>a;

    x=n/a;
    if(n%a>0)
        x++;
    y=m/a;
    if(m%a>0)
        y++;

    y*=x;

    cout<<y;

    return 0;
}
