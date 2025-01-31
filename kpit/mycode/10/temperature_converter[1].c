#include <stdio.h>
float temp(float celsius);
int main() 
{
    float celsius = 20.5;
    float fahrenheit = temp(celsius);
    printf("%f", fahrenheit);
    return 0;
}
float temp(float celsius)
{
    
    float fahrenheit = (celsius * 9/5) + 32;
    return fahrenheit;
}
