#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;
int  silaba(char s[5],int d,char m[400][400])
{
    int ct=0;
    for(int i=0;i<d;i++)
    {


      char aux[400]="";

        strcpy(aux,m[i]);

       while(strstr(aux,s)){
          ct++;
          strcpy(aux,strstr(aux,s)+strlen(s));
       }
    }

   return ct;
}
int isVocala(char c)
{
    if(strchr("aeiouAEIOU",c)!=NULL)
        return 1;
    return 0;
}

int sirMaxim(char text[400][400],int dim){

    char vocale[100];
    int lgmax=0;
    int k=0;
    for(int i=0;i<dim;i++){

        for(int j=0;j<strlen(text[i]);j++){

                int ct=0;
                char secventa[100]="";
                while(isVocala(text[i][j])&&j<strlen(text[i])){
                    secventa[ct++]=text[i][j];
                    j++;
                }
                if(strlen(secventa)>=2){
                    cout<<secventa<<endl;

                    int nrAparitii=silaba(secventa,dim,text);
                    cout<<nrAparitii<<endl;
                    if(nrAparitii>lgmax)
                    {
                        lgmax=nrAparitii;
                        strcpy(vocale,secventa);
                    }
                }
        }
     }
    cout<<vocale<<endl;
    return  lgmax;

  }

int main()
{
    ifstream fin("text.in");
    char s[400][400];
    int i=0;
    while(!fin.eof()){
        fin.getline(s[i],400);
        i++;
    }
    cout<<sirMaxim(s,i);


    return 0;
}
