#include <stdio.h>
#include <string.h>

void compressao(char *s)
{
    int i=0, j=0, c;
    while(s[i]!='\0')
    {
        c=1;
        while(s[i]==s[i+1])
        {
            i++;
            c++;
        }
        s[j++]=s[i];
        s[j++]=c+'0';
        i++;
    }
    s[j]='\0';
}

int main()
{
    char s[1000]={"aaabbcdddd"};
    compressao(s);
    printf("%s\n", s);
    return 0;
}
