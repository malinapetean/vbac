#include <iostream>
#include <iomanip>

using namespace std;

void p (int n, int x[100], int& mini, int &maxi,double &sum)
{
    for(int i=0;i<n;i++)
    {
        if(x[i]>maxi)
            maxi=x[i];
        if(x[i]<mini)
            mini=x[i];
        sum+=x[i];
    }
}

int main()
{
    int n,x[100],mini=99999,maxi=0;
    double sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>x[i];
    p(n,x,mini,maxi,sum);
    float rez =(sum-mini-maxi)/(n-2);
    cout<<setprecision(4)<<rez;

    return 0;
}
