#include <iostream>

using namespace std;

struct Nod{
    int info;
    Nod* urm;
    Nod* prec;

};

void addNodeStart(Nod*&head,int info)
{
    if(head==NULL)
    {
        head= new Nod;
        head->info=info;
        head->urm=NULL;
        head->prec=NULL;
    }
    else
    {
        Nod* nou= new Nod;
        nou->info= info;
        nou->urm= head;
        nou->prec=NULL;
        head= nou;
    }
}
void addPozitie(Nod*&head,int poz,int info)
{
    int ct=0;
    if(head==NULL)
    {
        head= new Nod;
        head->info=info;
        head->urm=NULL;
        head->prec=NULL;
    }
    else if(poz==0)
    {
        addNodeStart(head,info);
    }
    else{
        Nod* aux= head;
        while(ct<poz-1)
        {
            aux=aux->urm;
            ct++;
        }
        Nod* nou= new Nod;
        nou->info= info;
        nou->urm= aux->urm;
        nou->prec=aux->prec;
        aux->urm= nou;
    }
}
void afisare(Nod* head)
{
    Nod* aux= head;

    while(aux!=NULL)
    {
        cout<<aux->info;
        aux=aux->urm;
    }
}
int main()
{
    Nod* prim= NULL;

    addNodeStart(prim,0);
    addNodeStart(prim,5);
    addNodeStart(prim,0);
    addNodeStart(prim,0);
    addNodeStart(prim,0);
    addPozitie(prim,3,7);
    afisare(prim);
    cout<<endl;

    Nod* aux=prim;

    int ct=0;
    while(aux!=NULL)
    {

        if(aux->info==0)
        {
            addPozitie(prim,ct+1,0);
            aux=aux->urm;
            ct++;

        }
        aux=aux->urm;
        ct++;

    }
    afisare(prim);
    return 0;
}
