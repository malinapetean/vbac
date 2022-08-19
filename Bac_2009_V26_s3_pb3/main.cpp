#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    for(int i=k;i>0;i--)
    {
        cout<<n*k<<" ";
        k--;
    }
    return 0;
}
