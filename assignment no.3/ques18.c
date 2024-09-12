//write a program to print the tables of the numbers from 1 to 10.


#include <stdio.h>

int main()
{
printf("tables from 1 to 10\n");
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=10;j++)
		{
			int sum = i*j;
			printf(" %d\t ",sum);

		}
	printf("\n");
	}

return 0;
}
