#include <iostream>

using namespace std;
int Count(float a[100],int n)
{
	float sum=0,m;
	for(int i=0;i<n;i++)
		sum+=a[i];
	m=sum/n;
	int ct=0;
	for(int i=0;i<n;i++)
		if(a[i]>=m)
			ct++;

	return ct;
}
int main()
{
    int n;
    float a[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<Count(a,n);
    return 0;
}
