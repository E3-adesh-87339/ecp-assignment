/*Write a function to accept a 2-D array from the user. Write another function to print the 2-D
array. Re-use these functions in rest of the assignments wherever required.*/

#include<stdio.h>

int a(int *arr[][3]);
int p(int *arr[][3]);
int main()
{

	
	int arr[3][3];
	a(arr);
	p(arr);

return 0;
}

int a(int *arr[][3])
{
	printf("enter the arry element\n");
	for (int i = 0; i<3 ;i++)
	{
		for (int j = 0;j<3;j++)
		{
		scanf("%d",&arr[i][j]);
		}
	printf("\n");
}
}
int p(int *arr[][3])
{
printf("array element are:\n");
for (int i=0;i<3;i++)
{
	for (int j=0;j<3;j++)
	{
		printf("%d ",arr[i][j]);
	}
printf("\n");
}
}
