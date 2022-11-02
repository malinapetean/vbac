#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[53],aux[234]="";
    int ct=0;
    cin.get(s,53);
    for(int i=0;i<strlen(s);i=i+2)
    {
        if(strchr("123456789",s[i])==0){
            for(int j=1;j<=s[i+1]-'0';j++)
            {
                aux[ct]=s[i];

                ct++;

            }
        }
    }
    aux[ct]='\0';
    cout<<aux;
    return 0;
}
