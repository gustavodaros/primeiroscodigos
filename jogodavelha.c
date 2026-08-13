#include <stdio.h>

#define n 3
#define space ' '

void inicio(char s[n][n])
{
    int i, j;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            s[i][j] = space;
        }
    }
}

mostrar(char s[n][n])
{
    int i, j;
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%c %c", s[i][j], j==n-1 ? ' ':'|');
        }
        if(i!=n-1) printf("\n--------");
        putchar('\n');
    }
}

main()
{
    char velha[n][n];
    int posx, posy;
    char c = '0';
    int jogadas = 0;

    inicio(velha);
    while(1)
    {
        mostrar(velha);
        printf("Introduza a posicao de sua jogada por linha e coluna: ");
        scanf("%d %d", &posx, &posy);
        posx--; posy--;
        if(velha[posx][posy] = space)
        {
            velha[posx][posy] = c = (c == '0') ? 'X' : '0'; 
            jogadas++;
        }
        else printf("Posição já ocupada, tente novamente");
        if(jogadas == n*n)
        {
            break;
        }
    }
    mostrar(velha);
}