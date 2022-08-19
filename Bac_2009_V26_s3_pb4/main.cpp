#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("numere.in");
void sterge(int v[100],int &n, int i,int j)
{
    for(int a=i;a<=j;a++)
    {
        for(int b=i;b<n;b++)
            v[b]=v[b+1];
        n--;
    }
}
int main()
{
    int n,v[100],i,j;
    cin>>n;
    for(int k=1;k<=n;k++)
        cin>>v[k];
    for(int k=1;k<=n;k++)
        cout<<v[k];
        cout<<endl;
    sterge(v,n,2,4);
     for(int k=1;k<=n;k++)
        cout<<v[k];
    return 0;
}
