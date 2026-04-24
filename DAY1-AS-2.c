#include<stdio.h>
int main() {
 int sum,a,b,c,d,e;
 float avg,per;
 printf("Enter Makr Number 1:\n ");
 scanf("%d", &a);
 printf("Enter Makr Number 2:\n ");
 scanf("%d", &b);
  printf("Enter Makr Number 3:\n ");
 scanf("%d", &c);
  printf("Enter Makr Number 4:\n ");
 scanf("%d", &d);
  printf("Enter Makr Number 5:\n");
 scanf("%d", &e);
 sum = a+b+c+d+e;
 avg = sum / 5;
 per = (avg / 200) * 100;
 printf("The Average Mark is : %f\n", avg);
 printf("The Percentage is %f\n",per);
 return 0;
}