#include<stdio.h>
int main(void) {
    int c,f;
    printf("Enter the temperature in Celsius:");
    scanf("%d", &c);
    f = (c * 1.8) + 32;
 printf("The temperature in Fahrenheit is %d", f);
    return 0;
}