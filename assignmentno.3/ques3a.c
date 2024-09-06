/*Write a program to accept a number and               
. Calculate sum of digits of integer
Input: 9362
Output: 9 + 3 + 6 + 2 = 20
*/
#include<stdio.h>
int main()
{

int num ,rem,sum=0;
	printf("enter the number\n");
	scanf("%d",&num);

	while( num > 0 )
	{
		rem = num % 10;
		sum = sum+rem;
		num = num/10;
	}
	printf("%d\n",sum);





return 0;

}
