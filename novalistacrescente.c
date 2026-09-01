#include <stdio.h>

void nova_lista_crescente(int *v1, int n1, int *v2, int n2)
{
    int vr[n1+n2];
    int i=0, j=0, k=0;
    while(i<n1 && j<n2)
    {
        if(v1[i]<v2[j])
        {
            vr[k]=v1[i];
            i++;
        }
        else
        {
            vr[k]=v2[j];
            j++;
        }
        k++;
    }
    while(i<n1 || j<n2)
    {
        if(i==n1) vr[k++]=v2[j++];
        else if(j==n2) vr[k++]=v1[i++];
        else if(v1[i]<v2[j]) vr[k++]=v1[i++];
        else vr[k++]=v2[j++];
    }
    for(int m=0;m<(n1+n2);m++) printf("%d ", vr[m]);
}
int main()
{
    int v1[5]={1,3,4,6,8};
    int v2[4]={2,5,7,9};
    nova_lista_crescente(v1,5,v2,4);
    printf("\n");
    return 0;
}
