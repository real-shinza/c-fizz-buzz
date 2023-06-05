#include <stdio.h>

int main()
{
    int i, count;

    printf("ŒJ‚è•Ô‚·‰ñ”‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢B\n");
    scanf("%d", &count);

    for (i = 1; i <= count; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            printf("FizzBuzz\n");
        else if (i % 3 == 0)
            printf("Fizz\n");
        else if (i % 5 == 0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }

    return 0;
}