#include <iostream>
#include <fstream>

using namespace std;
bool mult(int n,int a[1000])
{
    int f[1000]{};
    for(int i=0;i<n;i++)
    {
        f[a[i]]++;
    }
    for(int i=0;i<1000;i++)
    {
        if(f[i]>1){
            return false;
        }
    }
    return true;
}
ifstream fin("date.in");
int main()
{
    int v[400],a,nrMaxim = 0,ok=1;
	while(fin>>a)
    {
		v[nrMaxim++] = a;
		if(mult(nrMaxim,v) == false)
        {
            nrMaxim--;
			break;
		}
	}

	cout<<nrMaxim<<" ";


    return 0;
}
