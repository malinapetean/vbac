#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[101],b[101];

    char sufix[100]="";
    cin>>a;
    cin>>b;
    int lga=strlen(a)-1;
    int lgb=strlen(b)-1;
    while(a[lga]==b[lgb])
    {


        char t=a[lga];

        char aux[]={t,'\0'};

       strcat(sufix,aux);

        lga--;
        lgb--;


    }

    if(lga==strlen(a)-1)
        cout<<"nu exista";
    else
        cout<<a+lga+1;
    return 0;
}
