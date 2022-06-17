#include <iostream>

using namespace std;

int main()
{
    int n,s=0,v[100],ct=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        s+=v[i];
    }

    while(s!=0 && n!=0)
    {
        cout<<s<<" ";
        s=s-v[n-1];
        n--;
    }

    return 0;
}
