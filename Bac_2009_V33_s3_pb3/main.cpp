#include <iostream>

using namespace std;
int sum3(int x[100],int n)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        if(x[i]%3==0)
            s+=x[i];
    }
    return s;
}
int main()
{
    int n,x[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    cout<<sum3(x,n);
    return 0;
}
