#include <stdio.h>
int maior_crescente(int *vet, int n)
{
    int i=0, j=1, r=1, k;
    while(i<n)
    {
        int c=1;
        k=i;
        j=k+1;
        while(j<n)
        {
            if(vet[j]>vet[k])
            {
                k++;
                j++;
                c++;
            }
            else break;
        }
        if(c>r) r=c;
        i++;
    }
    return r;
}
int main()
{
    int vet[10]={6,4,8,2,4,5,7,9,0,3};
    printf("A maior sequência crescente possui %d termos\n", maior_crescente(vet,10));
    return 0;
}
