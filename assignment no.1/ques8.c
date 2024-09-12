//Write a program to accept three integer numbers and find its average.
#include <stdio.h>
int main()
{

int n1,n2,n3,avg,sum;
 	printf("enter the three nmbers\n");
	scanf("%d%d%d",&n1,&n2,&n3);
		sum = n1+n2+n3;
		avg = sum / 3 ;
		printf("sum of numbers is  %d\n",sum);
		printf("average of numbers is %d\n",avg);

return 0;
}
