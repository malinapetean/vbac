#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[21],aux[21],ct=0,vocalastart=-1,vocalafinish=-1;
    cin.get(s,21);
    for(int i=0;i<strlen(s);i++)
    {
        if(strchr("aeiou",s[i]))
        {
            if(vocalastart==-1)
            {
                vocalastart=i;
            }
            else
                vocalafinish=i;

        }
        aux[ct++]=s[i];
    }
    aux[ct]='\0';
    strcpy(aux+vocalastart,aux+vocalastart+1);
    strcpy(aux+vocalafinish-1,aux+vocalafinish-1+1);
    cout<<aux;
    return 0;
}
