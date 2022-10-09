#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("bac.in");
//functie ce verifica daca un numar este prim
int prim(int n)
{
    if(n==0 || n==1)
        return 0;
    else
        for(int i=2;i<n;i++)
            if(n%i==0)
                return 0;
    return 1;
}
int nrdiv(int x)
{
    int ct=0;
    for(int i=1;i<=x;i++)
    {
        if(x%i==0 && prim(i)==1)
        {
            ct++;
        }
    }
    return ct;
}
int main()
{

    int n, nr,val=0;
    int prim=-1;
    int ultim;
    fin>>n;
    while(fin>>nr)
    {
        if(nrdiv(nr)%2==0)
        {

            if(prim==-1){
                prim=nr;
            }
            else
            {
                ultim=nr;
            }
         }

         /*
         if(nrdiv(nr)%2==0)
         {
            if(val==0)
                cout<<val<<" ";
            else
                val= nr;
         }
         */
    }
    //cout<<val;
    cout<<prim<<" "<<ultim;
    return 0;
}
