#include<stdio.h>
int main() {
    int next , x , y;
    printf("Enter X :");
    scanf("%d", &x);
    printf("Enter Y:");
    scanf("%d", &y);
    next = x;
    x = y;
    y = next;
    printf("After Swapping:\n");
    printf("%d\n", x);
    printf("%d\n", y);
    return 0;
}