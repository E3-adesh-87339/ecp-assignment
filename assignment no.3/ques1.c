/*Write a program to accept a character and a number, and print the character number times
Input:
Character: *
Number: 6
Output:
******
*/

#include<stdio.h>

int main()
{

char ch;
int num,i;
 printf("enter the character you want to print :\n");
 scanf("%c",&ch);
 printf("enter the number how many times you want to print the character:\n");
 scanf("%d",&num);

while(i<=num)
{
printf("%c ",ch);
i++;
}
printf("\n");
return 0;
}
