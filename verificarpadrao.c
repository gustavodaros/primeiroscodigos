#include <stdio.h>
int verificar_padrao(char *f, char *p)
{
    int i=0, c=0, j=0;
    while(f[i]!='\0')
    {
        j=0;
        if(f[i]==p[0])
        {
            while(f[i+j]!=' ' && f[i+j]!='\0') j++;
            if(f[i+j-1]==p[2] && j>2)
            {
                c++;
            }
        }
        i++;
    }
    return c;
}
int main()
{
    char f[100]={"Aula de estrturas de dados de escadas"};
    char p[3]={"e*s"};
    int r=verificar_padrao(f,p);
    printf("O padrão apareceu %d vezes na frase\n", r);
    return 0;
}
