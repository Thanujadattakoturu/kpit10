#include <stdio.h>
float temp(float fahrenheit);
int main() 
{
    float fahrenheit = 98.3;
    float celsius = temp(fahrenheit);
    printf("%f", celsius);
    return 0;
}
float temp(float fahrenheit)
{
    
    float celsius = (fahrenheit - 32) * 5/9;
    return celsius;
}

