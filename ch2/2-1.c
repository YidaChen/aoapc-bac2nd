#include<stdio.h>

int main()
{
    for(int ABC = 100; ABC <= 999; ABC++)
    {
        int A = ABC/100;
        int B = (ABC/10)%10;
        int C = ABC%10;
        
        if(ABC == A*A*A + B*B*B + C*C*C)
            printf("%d\n", ABC);
    }
}