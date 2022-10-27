#include <iostream>
#include <cmath>

using namespace std;

bool prim(int nr)
{
    if(nr==0 || nr==1)
        return false;
    else{
        for(int i=2;i<=nr/2;i++)
        {
            if(nr%i==0)
                return false;
        }
    }
    return true;
}
//operator ternar  val?EX1:EX2 daca val este adevarata atunci =>ex1 daca nu =>ex2  if(val)=>ex1 else ex2
//8 32   5=16
void P(int a,int b)
{
    int minim=a<b?a:b;
    int maxim=a<b?b:a;

    for(int i=2;i<=sqrt(maxim);i++)
    {

        if(prim(i)==true && pow(i,2)<maxim && pow(i,2)>minim){
             cout<<pow(i,2)<<endl;
        }

    }

}
int main()
{
    int a, b;
    cin>>a>>b;
    P(a,b);

    return 0;
}
