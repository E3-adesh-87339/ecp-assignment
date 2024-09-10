/*Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If
reversed number is same as entered number it is called palindrome).
*/


#include <stdio.h>          //not completed


int main()
{
	int a,b,c,d, num,temp,z;
	printf("enter the 5 digit number\n");
	scanf("%d",&num);
	z = num;
	a = num/10000;
	num = num%10000;
	b = num/1000;
	num = num%1000;
	c = num/100;
	num = num%100;
	d = num/10;
	temp = num%10;
	printf("%d%d%d%d%d\n",temp,d,c,b,a);
		if ( temp,d,c,b,a== num)
		{
		printf("number %d is palindrome\n",z);
		}
		else
		printf("number %d is palindrome\n",z);

return 0;
}

