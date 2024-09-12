/*Declare a structure to store data for student information. The structure contains roll number,
name, marks for students. Write a program to accept information of student from user and print
the same.
*/


#include <stdio.h>

typedef struct student{
	
	int roll;
	char name[20];
	float marks;

}std_t; 

int main()
{
	 std_t s;
	printf("enter the infomation of student:(roll no., name, marks)\n");
	scanf("%d %*c%s %f", &s.roll , s.name , &s.marks);
	printf("roll no. is  %d \t name is %s\t marks is %f\t\n",s.roll,s.name,s.marks);

return 0;
}
