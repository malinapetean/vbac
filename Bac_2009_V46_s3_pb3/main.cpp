#include <iostream>
#include <fstream>

using namespace std;
ifstream fin ("bac.txt");

int nrdivizori(int n)
{
    int ct=0;
    for(int i=1;i<=n;i++)
        if(n%i==0)
            ct++;
    return ct;

}
int main()
{
    int v[100],nou[100],n,k,ct=0;
    fin>>n;
    cin>>k;
    for(int i=0;i<n;i++)
        fin>>v[i];
    for(int i=0;i<n;i++)
        if(nrdivizori(v[i])>=k)
            nou[ct++]=v[i];
    for(int i=0;i<ct;i++)
        cout<<nou[i]<<" ";
    return 0;
}
