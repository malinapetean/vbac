#include <iostream>

using namespace std;

int f(int a){

	for (int d = 2; d <= a/2; d++)
			//primul divizor al lui a este si numar prim
		if (a % d == 0)
			return d;

	return a;

}

int main()
{
    int n,v[100],nr,ct=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>nr;
        if(nr==f(nr))
        {
            v[ct]=nr;
            ct++;
        }
    }
    int sch=1;
    while(sch)
    {
        sch=0;
        for(int i=0;i<ct-1;i++)
        {
            if(v[i]>v[i+1])
            {
                int aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                sch=1;
            }
        }
    }
    for(int i=0;i<ct;i++)
        cout<<v[i]<<" ";
    return 0;
}
