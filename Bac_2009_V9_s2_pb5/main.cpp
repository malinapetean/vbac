#include <iostream>

using namespace std;

int main()
{
    int n,v[100][100];
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>v[i][j];
    for(int i=0;i<n;i++)
		cout<<v[0][i]<<" ";
	for (int i=1;i<n;i++)
		cout<<v[i][n-1]<<" ";
	for (int i=n-2; i>=0;i--)
		cout<<v[n-1][i]<<" ";
	for (int i=n-2;i>=1;i--)
		cout<<v[i][0]<<" ";
    return 0;
}
