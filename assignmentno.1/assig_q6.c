//print the table

#include<stdio.h>
int main()
{

int res=0,n1;
printf("enter the number :");
scanf("%d",&n1);
for(int i=1;i<=10;i++)
{
	res=n1*i;
	printf("%dX%d=%d\n",n1,i,res);
}

return 0;
}
