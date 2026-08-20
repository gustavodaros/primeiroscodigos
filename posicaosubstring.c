#include <stdio.h>
#include <string.h>

int substring(char *s, char *sub)
{
    for(int i=0;s[i]!='\0';i++)
    {
        int p=0;
        if(s[i]=sub[0])
        {
            for(int j=0;sub[j]!='\0';j++)
            {
                if(s[i+j]==sub[j]) p++;
            }
            if(p==strlen(sub)) return i;
        }
    }
    return -1;
}
int main()
{
    char s[100]=("Aula de estrutras de dados e programacao");
    char sub[10]=("strut");
    printf("%d", substring(s, sub));
    return 0;
}
