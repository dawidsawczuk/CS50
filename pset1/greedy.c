#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
 int quarter = 25;
 int dime = 10;
 int nickel = 5;
 int penny = 1;
 int amount;
 float inputAmount;
 int result = 0;
 
 do {
     printf("Input amount you would like to change: ");
     inputAmount = GetFloat();
 }
 while(inputAmount < 0);
 
 amount = (int) round(inputAmount * 100.0); 
 
 while (amount >= quarter) {
  result++;
  amount = amount - quarter;
 } 

 while (amount >= dime) {
  result++;
  amount = amount - dime;
 } 

 while (amount >= nickel) {
  result++;
  amount = amount - nickel;
 } 

 while (amount >= penny) {
  result++;
  amount = amount - penny;
 }

 printf("%d\n", result);
}