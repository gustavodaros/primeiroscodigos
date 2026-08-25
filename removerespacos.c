#include <stdio.h>
#include <string.h>

void remover_espacos(char *s)
{
    int i=0, t=0;
    while(s[i]!='\0')
    {
        if(s[i]!=' ')
        {
            s[t]=s[i];
            t++;
        }
        else if(t>0 && s[t-1]!=' ')
        {
            s[t]=s[i];
            t++;
        }
        i++;
    }
    if(t>0 && s[t-1]==' ') t--;
    s[t]='\0';
}

int main()
{
    char s[1000]={"   Aula    de estruturas    de  dados     e programação    "};
    remover_espacos(s);
    printf("%s\n", s);
    return 0;
}
