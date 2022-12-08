#include <iostream>

using namespace std;
void calcul(int n,int &x)
{
    int nrpare=0,nou=0;
    while(n!=0)
    {
        if(n%2==0)
        {
            nou=nou*10+n%10;
            nrpare++;
        }
        n/=10;
    }
    if(nrpare>0)
    {
        x=nou;
    }
    else
        x=0;
}
int main()
{
    int n,x;
    cin>>n;
    calcul(n,x);
    cout<<x;

    return 0;
}
