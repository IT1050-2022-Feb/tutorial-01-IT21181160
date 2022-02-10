/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {

int distance, newDistance, rate, subRate, fullRate ;

printf("Enter the distance travelled : ");
scanf("%d",&distance);

newDistance = distance - 30;

if(newDistance <= 30)
rate = distance*50;
else
rate = 30*50 + (newDistance*40);
printf("Rate is : %d",rate);
 

 


  return 0;
}
