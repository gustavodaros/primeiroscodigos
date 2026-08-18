#include <stdio.h>

void deslocar(int v[], int n, int pos) {
    for (int i=0;i<pos;i++)
    {
        int ultimo=v[n-1];
        for (int j=n-1;j>0;j--) v[j]=v[j-1];
        v[0]=ultimo;
    }
}

int main() {
    int v[]={1, 2, 3, 4, 5};
    int n = 5;
    int pos = 2;
    deslocar(v, n, pos);
    for (int i=0;i<n;i++) printf("%d ", v[i]);
    return 0;
}
