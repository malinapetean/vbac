#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int putere(int n) {
  int p=1;
  while(p<=n)
    p=p*2;
  return p/2;
}
int main()
{
    int n, a, b;
    fin>>n;
    for(int i=0;i<n;i++)
    {
        fin>>a>>b;
        if(putere(b)>=a)
            cout<<putere(b)<<" ";
        else
            cout<<0;

    }
    return 0;
}
