#include <stdio.h>

int main()
{
    int v[]={1,5,3,9}, x, y;
    x=v[0];
    y=v[1];
    for(int i=1;i<4;i++)
    {
        if(v[i]>x) x=v[i];
    }
    for(int j=1;j<4;j++)
    {
        if(v[j]==x) continue;
        else if(v[j]!=x)
        {
            if(v[j]>y) y=v[j];
        }
    }
    printf("%d", y);
    return 0;
}