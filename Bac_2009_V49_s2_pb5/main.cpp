#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[21],aux[21],ct=0;
    cin.get(s,21);
    for(int i=0;i<strlen(s);i++){
        if(strchr("aeiou",s[i])!=0)
        {
            aux[ct++]=s[i];
        }
    }
    aux[ct]='\0';
    cout<<aux;
    return 0;
}
