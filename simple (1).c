#include <stdio.h>

int main()
{
    int A,B,C,min,max,bet;
    char a,b,c;
    scanf("%d%d%d",&A,&B,&C);
    scanf(" %c",&a);
    scanf(" %c",&b);
    scanf(" %c",&c);

    if(A<B && A<C)
    {
        if(B<C)
        {
            min=A;
            bet=B;
            max=C;
        }
        else
        {
            min=A;
            bet=C;
            max=B;
        }
    }
    else if(B<A && B<C)
    {
        if(A<C)
        {
            min=B;
            bet=A;
            max=C;
        }
        else
        {
            min=B;
            bet=C;
            max=A;
        }
    }
    else if(C<A && C<B)

    {
        if(A<B)
        {
            min=C;
            bet=A;
            max=B;
        }
        else
        {
            min=C;
            bet=B;
            max=A;
        }
    }

    if(a=='A') {
        if(b=='B')
            printf("%d %d %d", min, bet, max);
        else
            printf("%d %d %d", min, max, bet);
    }
    else if(a=='B') {
        if(b=='A')
            printf("%d %d %d", bet, min, max);
        else
            printf("%d %d %d", bet, max, min);
    }
    else {
        if(b=='B')
            printf("%d %d %d", max, bet, min);
        else
            printf("%d %d %d", max, min, bet);
    }


    return 0;
}