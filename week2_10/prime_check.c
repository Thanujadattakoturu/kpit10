#include <stdio.h>

int main() 
{
    int num, i = 2, isPrime = 1;
    scanf("%d", &num);
    if (num <= 1) 
    {
        printf("NO\n");
        return 0;
    }

    while (i*i <= num)
    {
        if (num%i == 0) {
            isPrime = 0; 
            break;
        }
        i++;
    }

    if (isPrime) 
    {
        printf("YES\n");
    } 
    else
    {
        printf("NO\n");
    }

    return 0;
}
