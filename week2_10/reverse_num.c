#include <stdio.h>

int main() {
	// your code goes here
	int num, reversed = 0;
    scanf("%d", &num);
    
    while (num > 0) 
    {
        int digit = num % 10; 
        reversed = reversed * 10 + digit;
        num /= 10; 
    }
    
    printf("%d\n", reversed);
    
    return 0;

}