#include <iostream>
#include <fstream>

using namespace std;

void cifre(int a,int &b)
{
    b = 0;
	int f[10],i,zero = 0;
	for (int i=0;i<10;i++)
		f[i]=0;
	while(a>0)
	{
		f[a%10]++;
		a=a/10;
	}
	if(f[0])
        zero=1;
	for(int i=1;i<10;i++)
		if(f[i] != 0)
        {
			if (zero)
            {
				b=(b*10+i)*10;
				zero=0;
			}
            else
            {
				b = b * 10 + i;
			}
		}


}
ifstream fin("date.in");
int main()
{
    int n;
    fin>>n;
    while(fin>>n)
    {
        int nr=n;
        cifre(n,nr);
        if(n==nr)
            cout<<n<<" ";
    }

    return 0;
}
