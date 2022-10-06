#include <iostream>

using namespace std;

int main()
{
    unsigned int n,k,v[100];
    cin>>n;
    cin>>k;
    for (int i=0;i<n;i++)
		cin>>v[i];
	while(k>0)
    {
		int primul=v[0];
		for (int i=0;i<n-1;i++)
			v[i]=v[i + 1];
		v[n-1]=primul;
		k--;
	}
	for(int i=0;i<n;i++)
		cout<<v[i]<<" ";
    return 0;
}
