#include<stdio.h>

int main()
{
	int month,year;
	printf("Enter the Month  : ");
	scanf("%d",&month);
	printf("Enter the year : ");
	scanf("%d",&year);

	switch(month )
	{
		case 1 :printf("Jan - 31 \n");
				break;

		case 2:  if((year % 400 == 0 && year % 100 != 0  )  || (year % 4 ==0 ))
					printf("Feb - 29 Days \n ");
				else
					printf("Feb - 28 days \n");
				break;

		case 3 :printf("Mar - 31 days \n");
				break;
		case 4 :printf("April - 30 days \n");
				break;

		default :printf("Invalid INPUT \n  ");
				break;
	}
	return 0;
}
