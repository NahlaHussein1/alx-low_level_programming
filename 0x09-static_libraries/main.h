#include <stdio.h>

int main(void)
{
        unsigned long int num;
        unsigned long int x;
        unsigned long int y;
        unsigned long int z;

        x = 1;
        y = 2;
        printf("%d, ", x);
        printf("%d, ", y);
        for (num = 3; num < 51; num++)
        {
                z = y;
                y += x;
                printf("%d", y);
                if (num == 50)
                {
                        break;
                }
                printf(", ");
                x = z;
        }
        printf("\n");
        return (0);
}
