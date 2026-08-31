#include <stdio.h>
#include <string.h>

int caracteres_maior_palavra(char *s)
{
    int i=0, c=0, maior=1;
    while(s[i]!='\0')
    {
        if(s[i]!=' ') c++;
        else
        {
            if(c>maior) maior=c;
            c=0;
        }
        i++;
    }
    if(c>maior) maior=c;
    return maior;
}
int main()
{
    char s[100]={"Aula de estruturas de dados e programacao"};
    printf("Frase: %s\nQuantidade de letras da maior palavra: %d\n", s, caracteres_maior_palavra(s));
    return 0;
}
