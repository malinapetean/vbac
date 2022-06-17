#include <iostream>

using namespace std;

int sub(int v[100], int n, int a){

	int ct = 0;
	for(int i = 0; i < n; i++)
		if (v[i] < a)
			ct++;
	return ct;

}
void sortare(int v[100],int n)
{
    int sch=0;
    while(sch==0)
    {
        sch=1;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]>v[i+1])
            {
                int aux= v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                sch=0;
            }
        }
    }
}
int main()
{
    int n,v[100];

    int ok=1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sortare(v,i+1);
        if(sub(v,i,v[i])!=i){
                ok=0;
        }
    }
    cout<<ok;
    return 0;
}
