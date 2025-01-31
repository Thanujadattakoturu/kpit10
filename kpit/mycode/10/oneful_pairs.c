#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int c=a+b+(a*b);
    if(c==111)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }

}
