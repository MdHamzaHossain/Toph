//mra apu
#include <stdio.h>
#include <string.h>

int main()
{

    int T, c;
    scanf("%d", &T);

    while (T--)
    {
        c = 0;

        char S[2000];

        scanf("%s", &S);

        int l = strlen(S);

        for (int i = 0; i < l; i++)
        {
            if (S[i] == 'N' || S[i] == 'W' || S[i] == 'D')
            {

                continue;
            }
            else

            {
                c++;
            }
        }

        int m = c / 6;
        int n = c % 6;

        if (m == 0)
        {

            if (n == 1)
            {
                printf("%d BALL\n", n);
            }
            else
            {

                printf("%d BALLS\n", n);
            }
        }

        else if (n == 0)
        {

            if (m == 1)
            {
                printf("%d OVER\n", m);
            }
            else
            {

                printf("%d OVERS\n", m);
            }
        }

        else
        {

            if (m == 1)
            {
                printf("%d OVER ", m);
            }
            else
            {

                printf("%d OVERS ", m);
            }

            if (n == 1)
            {
                printf("%d BALL\n", n);
            }
            else
            {

                printf("%d BALLS\n", n);
            }
        }
    }
    return 0;
}