#include<stdio.h>


int main( )
{
	int emp_id , dept_no;
	char dc;

	printf("Enter The Employee ID : ");
	scanf("%d",&emp_id);
	printf("Enter Dept No.        :");
	scanf("%d",&dept_no);
	printf("Enter Designation Code:");
	scanf("%*c%c",&dc);

	switch( dept_no  )
	{
		case 10:printf("Employee with EMP id :%d working in Marketing Department\n ",emp_id);
				break;
		case 20:printf("Employee with EMP id :%d working in Management Department \n",emp_id);
				break;
		case 30:printf("Employee with EMP id :%d working in Management Department\n ",emp_id);
				break;
		case 40:printf("Employee with EMP id :%d working in Management Department\n ",emp_id);
				break;
		
		
		default : printf("Invalid Dept Number \n");
	}

	switch(dc )
	{
		case 'M' :printf("as a Manager \n");
					break;
		case 'S' :printf("as a Supervisor \n");
					break;
		case 's' :printf("as a sales\n");
					break;
		case 'C' :printf("as a clerk\n");
					break;
		
				
	}

	return 0;
}

