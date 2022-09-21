#include <iostream>
#include <fstream>

using namespace std;

ifstream f("numere.in");
int main()
{
    int n,maxX,minY,x,y;
	f>>n>>x>>y;
	maxX = x;
	minY = y;
	for (int i=1; i < n; i++)
    {

		f>>x>>y;
		if (x > maxX)
			maxX = x;
		if (y < minY)
			minY = y;
	}

	if (maxX < minY)
		cout<<maxX<<" "<<minY;
	else
		cout<<0;

    return 0;
}
