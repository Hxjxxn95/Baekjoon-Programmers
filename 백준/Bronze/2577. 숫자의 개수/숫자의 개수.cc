#include <stdio.h>

int main()
{
    int count[10] = { 0, };
    int A, B, C;
    int n;

    int pop, i;

    
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    n = A * B * C;

    while (n > 0)
    {
       
        pop = n % 10;
        n /= 10;

        count[pop]++;
    }

    
    for (i = 0; i < 10; ++i)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}