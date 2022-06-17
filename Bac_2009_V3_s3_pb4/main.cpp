#include <iostream>

using namespace std;

int cif(int a,int b)
{
    int ct=0;
    while(a>0)
    {
        if(a%10==b)
            ct++;
        a/=10;
    }
    return ct;
}

int main()
{
    int n, f[10];
    cin>>n;
    for(int i=0;i<10;i++)
        f[i]=0;
    int cifraImp=-1;
    int aux=n;
    int flag=1;
    while(n!=0&&flag!=0){
         int cifra=n%10;
         if(cif(aux,cifra)%2!=0){
             if(cifraImp==-1){
                 cifraImp=cifra;
             }else if(cifraImp!=cifra){
                     flag=0;
             }
         }
         n/=10;

    }
    if(flag!=0)
    {

    }




    return 0;
}
