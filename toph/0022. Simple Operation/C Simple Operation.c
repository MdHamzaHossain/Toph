#include <stdio.h>

int main()
{
    int T, A, C, R;
    char B;
    int i = 1;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%d %c %d", &A,&B,&C);
        //printf("%d%c%d", A,B,C);
        switch (B)
        {

        case '+':
            R = A + C;
            break;
        case '-':
            R = A - C;
            break;
        case '*':
            R = A * C;
            break;
        }
        printf("Case %d: %d\n",i, R);
        i++;
    }

    return 0;
}
