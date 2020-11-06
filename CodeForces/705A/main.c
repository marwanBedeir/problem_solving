#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cin>> n ;
    cout<<"I hate";
    for(i=1;i<n;i++)
    {
        cout<<" that";
        if(i%2==0)
            cout<<" I hate";
        else
            cout<<" I love";
    }
    cout<<" it";
    return 0;
}