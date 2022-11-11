#include <iostream>
#include <fstream>

using namespace std;
ifstream f("bac.txt");
int main()
{
    int n,a[100];
	f>>n;
	for (int i = 0; i < n; i++)
		f>>a[i];
	ofstream g("bac.txt");
	g<<n<<'\n';
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++)
			g<<a[j]<<" ";
		for (int j = 0; j < i; j++)
			g<<a[j]<<" ";
		g<<'\n';
	}

    return 0;
}
