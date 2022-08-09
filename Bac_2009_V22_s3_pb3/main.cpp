#include <iostream>

using namespace std;


int  putere(int n,int nr){

     int ct=0;
     while(n%nr==0){

        ct++;
        n=n/nr;
     }

     return ct;
 }


 int factorial( int n ){

    int ct2=0;
    int ct5=0;
    for(int i=1;i<=n;i++){

            if(i%2==0){
                ct2+=putere(i,2);
            }
            if(i%5==0){

                ct5+=putere(i,5);

            }
    }
    return ct2>ct5?ct5:ct2;



 }
int main()
{
    int k,ct=0;
    cin>>k;
    while(factorial(ct)!=k)
    {
        ct++;
    }
    cout<<ct;

    return 0;
}
