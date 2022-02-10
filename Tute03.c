/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int n, num, sum=0;

  printf("Enter a final number to take a sum : ");
  scanf("%d",&n);
  
  for(int num=0;num<=n;num++){
    sum=sum+num;
    }
    printf("sum of the numbers until the number you entered: %d",sum);
  
  return 0;
}

