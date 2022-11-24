#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");
int main()
{
    int n,f[100];
    for(int i=0;i<100;i++)
        f[i]=0;
    while (fin>>n)
        f[n]++;
    for (int i = 1; i < 100; i = i + 2)
        if (f[i] != 0)
            fout << i << " ";
    fout << endl;
    for (int i = 98; i >= 0; i = i - 2)
        if (f[i] != 0)
            fout << i << " ";
    return 0;
}
