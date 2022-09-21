#include <iostream>

using namespace std;
int nr_prim(int x)
{
    int nr=x+1;
    int ok;
    while(ok)
    {
        ok=1;
        if(nr==0 || nr==1)
        {
            nr++;
            ok=0;
        }
        else
        {
            for(int i=2;i<=x/2;i++)
                if(nr%i==0)
                {
                    nr++;
                    ok=0;
                }

        }
        if(ok==1)
            return nr;
        ok=1;
    }
}
int main()
{
    cout << nr_prim(25);
    return 0;
}
