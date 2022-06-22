#include <iostream>

using namespace std;

int cifreEgale(int n)
{
    int aux=n;
    int cif=n%10;
    while(n!=0)
    {
        if(n%10!=cif)
            return 0;
        n/=10;
    }
    return 1;

}

int main()
{
    int n,v[20];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];

    }
    for(int i=0;i<n;i++)
    {
        if(cifreEgale(v[i]))
            cout<<v[i]<<" ";

    }
    return 0;
}
