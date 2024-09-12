/*Write a program to accept a number and print all factors excluding the number
Input: 24
Output: all factors: 1, 2, 3, 4, 6, 8, 12
*/

#include<stdio.h>

int main()
{
 int num;
 printf("enter the number\n");
 scanf("%d",&num);
	int i = 1;
	while(i<num)
	{
		if(num%i==0)
		{
		printf("%d\t",i);
		}
		i++;
	}


return 0;
}

