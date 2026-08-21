#include <stdio.h>
#include <string.h>

void inverter_palavras(char *c)
{
    int n=strlen(c), p=0, t=0;
    char aux;
    for(int i=0;i<n/2;i++)
    {
        aux=c[i];
        c[i]=c[n-1-i];
        c[n-1-i]=aux;
    }
    for(int i=0;i<=n;i++)
    {
        if(c[i]==' ' || c[i]=='\0')
        {
            int f=i-1;
            for (int j=0;j<p/2;j++)
            {
                aux=c[t+j];
                c[t+j]=c[f-j];
                c[f-j]=aux;
            }
            t=i+1;
            p=0;
        }
        else p++;
    }
}
int main()
{
    char c[1000]="Aula de estruturas de dados";
    inverter_palavras(c);
    printf("%s\n", c);

    return 0;
}
