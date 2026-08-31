#include <stdio.h>

void valores_comuns(int *v1, int n1, int *v2, int n2)
{
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(v1[i]==v2[j])  printf("%d\n", v1[i]);
        }
    }
}
int main()
{
    int v1[5]={3, 4, 8, 9, 0};
    int v2[4]={2, 1, 4, 0};
    valores_comuns(v1, 5, v2, 4);
    return 0;
}
