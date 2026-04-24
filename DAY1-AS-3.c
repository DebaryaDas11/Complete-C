#include<stdio.h>
int main() {
    int p , r, x;
    printf("Enter The amount of paisa:");
    scanf("%d", &p);
    r = p/100;
    x = p%100;
    printf("The final value is %d ruppess and %d paisa", r,x);
    return 0;
}