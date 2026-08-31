#include <stdio.h>
#include <string.h>

int palindromo(char *p)
{
    int n=strlen(p);
    for(int i=0;i<=n/2;i++)
    {
        if(p[i]!=p[n-1-i]) return 0;
    }
    return 1;
}

int main()
{
    char p[100];
    fgets(p, 100, stdin);
    p[strcspn(p, "\n")] = '\0';
    if(palindromo(p)) printf("%s é palíndromo\n", p);
    else printf("%s não é palíndromo\n", p);
    return 0;
}
