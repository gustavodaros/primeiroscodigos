#include <stdio.h>

int subsequencia(int *v1, int n1, int *v2, int n2)
{
    int n=0, j=0;
    for(int i=0;i<n2;i++)
    {
        int c=0;
        for(j;j<n1;j++)
        {
            if(v2[i]==v1[j])
            {
                c++;
                break;
            }
        }
        if(c)
        {
            n+=1;
        }
    }
    if(n>=n2) return 1;
    else return 0;
}
int main()
{
    int v1[8]={1,3,6,4,9,0,8,7};
    int v2[3]={4,9,8};
    if(subsequencia(v1,8,v2,3)) printf("O segundo vetor é uma subsequência do primeiro vetor\n");
    else printf("O segundo vetor não é uma subsequência do primeiro vetor\n");
    return 0;
}
