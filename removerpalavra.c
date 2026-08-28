#include <stdio.h>
#include <string.h>

void removerpalavra(char *f, char *p)
{
    int np=strlen(p), nf=strlen(f), i=0;
    while(f[i]!='\0')
    {
        int c=0, j=0;
        if(f[i]==p[0])
        {
            int l=i;
            while(p[j]!='\0')
            {
                if(f[l]==p[j]) c++;
                if(c==np-1)
                {
                    int p=l;
                    while(f[l]!='\0' && f[l+np]!='\0')
                    {
                        f[l]=f[l+np+1];
                        l++;
                    }
                j++;
                l++;
                }
            }
        }
        i++;
    }
    f[nf-np]='\0';
}
int main()
{
    char f[1000]={"Eu gosto muito de programar"};
    char p[10]={"muito"};
    removerpalavra(f, p);
    printf("%s\n", f);
    return 0;
}
