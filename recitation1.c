/*This program reads in a four digit number from user, finds the*/
/*largest number and prints it to the screen                   */

#include<stdio.h>

int main(){
  /*
   *@var int num holds four digit number entered by user
   *@var dig[1-4] are the seperate digits in num
   *@var int max stores the largest digit in num
   */
  
  int num, dig1, dig2, dig3, dig4;
  int max;

  /*ask the user for a four digit number*/

  printf("Please input a four digit number\n");
  scanf("%d", &num);

  /*Break apart the number digit by digit*/
  /* and store in variables for comparison*/

  dig1 = num/1000;
  dig2 = num/100%10;
  dig3 = num%100/10;
  dig4 = num%10;

  /*set int max=num1;  and compare to all other digits*/
  
  max = dig1;

  if(dig2>max)
    max= dig2;
  if(dig3>max)
    max = dig3;
  if (dig4>max)
    max= dig4;

  printf("The largest number in %d is: %d\n", num, max);

  /*exit the program*/

  return 0;
}
