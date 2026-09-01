#include <stdio.h>

void menor_frequencia(int *v, int n, int *m, int *q)
{
    *q=n+1;
    for(int i=0;i<n;i++)
    {
        int r=0;
        for(int j=0;j<n;j++)
        {
            if(v[j]==v[i]) r++;
        }
        if(r<*q)
        {
            *q=r;
            *m=v[i];
        }
    }
}
int main()
{
    int q, m, v[5]={3,4,1,4,3};
    menor_frequencia(v,5,&m,&q);
    printf("O elemento %d repetiu apenas %d vez(es)\n", m, q);
    return 0;
}
