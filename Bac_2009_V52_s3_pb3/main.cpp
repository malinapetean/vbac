#include <iostream>
#include <fstream>

using namespace std;
bool mult(int n,int a[1000])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
                return false;
        }
    }
    return true;
}
int main()
{
    ifstream fin("date.in");
    int a[1000],n,nrmax=0;
    while(fin>>n)
    {
        a[nrmax++] = n;
		if (mult(nrmax,a) == 0) {
			nrmax--;
			break;
		}
    }
    cout<<nrmax;
    return 0;
}
