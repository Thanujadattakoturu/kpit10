#include <stdio.h>
float bmicalc(float height, float weight);
int main() {
    float height = 1.82;
    float weight = 72;
    float bmi= bmicalc(height, weight);
    printf("%f",bmi);
    return 0;
}
float bmicalc(float height, float weight)
{
    float bmi= weight/(height*height);
    return bmi;
}
