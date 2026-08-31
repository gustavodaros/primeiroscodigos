#include <stdio.h>
void contador_vogal_consoante(char *s, int *v, int *c)
{
    int i=0;
    *v=0;
    *c=0;
    while(s[i]!='\0')
    {
        if(s[i]>='A' && s[i]<='Z') s[i]+=32;
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') (*v)++;
        else
        {
            if(s[i]>='a' && s[i]<='z') (*c)++;
        }
        i++;
    }
}
int main()
{
    char s[100]={"Aula de Estruturas de Dados e Programacao"};
    int v, c;
    contador_vogal_consoante(s,&v,&c);
    printf("Vogais: %d | Consoantes: %d\n", v, c);
    return 0;
}
