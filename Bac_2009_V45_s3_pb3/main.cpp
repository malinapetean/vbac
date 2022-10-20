#include <iostream>

using namespace std;

int main()
{
    float a[100];
    int n,i,j;
	cin>>n;
	for (i = 0; i < n; i++)
		cin>>a[i];
    int ok=0;
	for (i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if (i == j)
				continue;
			if (a[i] == a[j])
				break;
		}
		if (j == n)
			cout<<a[i]<<" ";
	}
    return 0;
}
