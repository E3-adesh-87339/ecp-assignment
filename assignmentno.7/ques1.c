/*Write a function to accept a 2-D array from the user. Write another function to print the 2-D
array. Re-use these functions in rest of the assignments wherever required.*/

#include<stdio.h>
int main()
{
	int arr[3][3];
	printf("enter the arry element\n");
	for (int i = 0; i<3 ;i++)
	{
		for (int j = 0;j<3;j++)
		{
		scanf("%d%d"&i,&j);
		}
	printf("\n");
	}

return 0;
}
