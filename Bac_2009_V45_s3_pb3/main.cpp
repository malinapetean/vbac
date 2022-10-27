#include <iostream>

using namespace std;


//todo functie ce primeste ca paramtru un vector de double  si un numar real  returneaza true daca sea fla numarul in vector
int exista(double[100],int,double );
int main()
{
    double a[100];
    int d=0;
    int n;
    double nr;
	cin>>n;
	for (int i=0;i<n;i++)
    {
        cin>>nr;
        if(exista(a,d,nr)==-1){
            a[d]=nr;
            d++;
        }
        else{
            a[exista(a,d,nr)]=-1;
        }
	}
    for(int i=0;i<d;i++)
    {
        if(a[i]!=-1)
        {
            cout<<a[i]<<" ";
        }
    }

    /*for(int i=0;i<n;i++)
        cin>>a[i];
      cout<<exista(a,n,12.2);
    */
    return 0;
}
int  exista(double a[100],int lg,double n)
{
    for(int i=0;i<lg;i++){
         if(a[i]==n){
            return i;
        }
    }
    return -1;
}
