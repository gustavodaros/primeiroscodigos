#include <stdio.h>

void maiuscula(char *c)
{
    int i=0;
    while (c[i+1]!='\0')
    {
        if(c[0]!=' ')
        {
            if(c[0]>='a' && c[0]<='z') c[0]-=32;
        }
        if(c[i]==' ' && c[i+1]!=' ' && (c[i]<='A' || c[i]>='Z'))
        {
            if(c[i+1]>='a' && c[i+1]<='z') c[i+1]-=32;
        }
        i++;
    }
}
int main()
{
    char c[100]={"aula de estruturas de Dados e programação"};
    maiuscula(c);
    printf("%s\n", c);
    return 0;
}
