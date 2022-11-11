#include <iostream>

using namespace std;

int main()
{
   int a,n,r,auxn=0;
    cin>>n>>a>>r;
    while(auxn!=n)
    {
        cout<<a+auxn*r<<" ";
        auxn++;
    }
    return 0;
}
