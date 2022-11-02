#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("date.in");
int main()
{
    int n,a[100];
    fin>>n;
    for(int i=0;i<n;i++)
    {
        fin>>a[i];

    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]%2==0 && a[j]%2==0)
            {
                cout<<a[i]<<" "<<a[j]<<endl;
            }
            if(a[i]%2==1 && a[j]%2==1)
            {
                cout<<a[i]<<" "<<a[j]<<endl;
            }
        }
    }
    return 0;
}
