#include <iostream>;i++
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("nr.txt");
    int nr,v[100],ct=0;
    while(fin>>nr)
    {
        if(nr<=99)
        {
            v[ct]=nr;
            ct++;
        }
    }
    if(ct==0)
    {
        cout<<"NU EXISTA";
    }
    else
    {
        int sch=0;
        while(sch==0)
        {
            sch=1;
            for(int i=0;i<ct-1;i++)
            {
                if(v[i]<v[i+1])
                {
                    int aux=v[i];
                    v[i]=v[i+1];
                    v[i+1]=aux;
                    sch=0;
                }
            }
        }
        for(int i=0;i<ct;i++)
        {
            cout<<v[i]<<" ";
        }
    }

    return 0;
}
