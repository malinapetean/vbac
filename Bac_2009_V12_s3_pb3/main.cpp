#include <iostream>
#include <fstream>

using namespace std;

ifstream f("nr1.txt");
ifstream g("nr2.txt");

int main()
{
    int a,b;
    f>>a;
    g>>b;
    while (!f.eof() && !g.eof()){
		if (a < b)
        {
			if(a % 5 == 0)
				cout<<a<<" ";
			f>>a;
		}
		else if (b < a)
		{
			if (b % 5 == 0)
				cout<<b<<" ";
			g>>b;
		}
		else
		{
			f>>a;
			g>>b;
		}
	}
	while (!f.eof()){

		if (a % 5 == 0)
			cout<<a<<" ";
		f>>a;
	}
	while (!g.eof()){
		if (b % 5 == 0)
			cout<<b<<" ";
		g>>b;

	}
    return 0;
}
