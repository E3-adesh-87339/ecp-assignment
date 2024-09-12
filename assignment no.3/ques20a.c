/*20. Write a program to display
a. Prime numbers between 1 to 100
*/


#include <stdio.h>
int main()
{
 	int num = 2,res,i=2;
	printf("prime numbers from 1 to 100 are \n");
	while (i<=100)
	{
		
		for (i=2;num%i==0;i++)
		{
		 num++;
		}
		printf("%d\t",num);
	}

return 0;
}
