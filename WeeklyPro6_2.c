#include <stdio.h>
int main()
{
    int i, j, a, number[5];
    for (i = 0; i < 3; ++i)
    {
        scanf("%d", &number[i]);
    }
    for (i = 0; i < 3; ++i)
    {
        for (j = i + 1; j < 3; ++j)
        {
            if (number[i] < number[j])
            {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    for (i = 0; i < 3; ++i)
        printf("%d ", number[i]);
}