/*Modify above program (18) to accept a range i.e. two numbers and print tables of numbers
within the range.
Input: 3 6
Output:
3
4 5 6
6
8 10 12
9 12 15 18
12 16 20 24
15 20 25 30
18 24 30 36
21 28 35 41
24 32 40 48
27 36 45 54
30 40 50 60
*/
#include <stdio.h>
int main()
{
int n1,n2,i;
printf("enter the range of number between which you want to print the table :\n");
scanf("%d%d",&n1,&n2);
printf("tables in range are :\n");
 	for ( i=1; i<=10;i++)	
	 {    
	 
		for(int j=n1;j<=n2;j++)
		{	
			int sum = i*j;
			printf("%d\t",sum);
		}
		printf("\n");
	}
	



return 0;
}



