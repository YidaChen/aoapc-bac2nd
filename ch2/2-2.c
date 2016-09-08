#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    while(scanf("%d %d %d", &a, &b, &c))
    {
        int n = 10;
        for(; n <= 100; n++)
        {
            if((n-a)%3 == 0 && (n-b)%5 == 0 && (n-c)%7 == 0)
            {
                printf("%d\n", n);
                break;
            }
        }
        if(n == 101)
            printf("%s\n", "No answer");
    }
}