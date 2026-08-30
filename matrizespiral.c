#include <stdio.h>

void matriz_espiral(int n, int m[n][n])
{
    int topo=0, base=n-1, esq=0, dir=n-1;
    while(base>=topo && dir>=esq)
    {
        for(int i=esq; i<=dir; i++) printf("%d ", m[topo][i]);
        topo++;
        for(int j=topo; j<=base; j++) printf("%d ", m[j][dir]);
        dir--;
        for(int k=dir; k>=esq; k--) printf("%d ", m[base][k]);
        base--;
        for(int l=base; l>=topo; l--) printf("%d ", m[l][esq]);
        esq++;
    }
}
int main()
{
    int m[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    matriz_espiral(4,m);
    printf("\n");
    return 0;
}
