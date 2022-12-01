#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("SIR.TXT");
	int n,i,lgMax = -1,lg,valoarePl,valoareAnt;
	fin>>n;
	fin>>valoareAnt;
	lg = 1;
	for (i = 1; i < n; i++)
    {
		int a;
		fin>>a;
		if (a == valoareAnt)
			lg++;
		else {

			if(lg >= lgMax) {
				valoarePl = valoareAnt;
				lgMax = lg;
			}
			valoareAnt = a;
			lg = 1;
		}
	}
	if (lg >= lgMax) {
		valoarePl = valoareAnt;
		lgMax = lg;
	}
	cout<<lgMax<<" "<<valoarePl;
    return 0;
}
