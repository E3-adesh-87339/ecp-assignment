/*Write a function to accept student information from the user. Write another function to printWrite a function to accept student information from the user. Write another function to print
student’s information. Re-use these functions in rest of the assignments wherever required.
*/


#include <stdio.h>

typedef struct student {
	int std;
	int roll;
	char name[20];
	float marks;
	char addr[20];

}stud_t;

void scan_t(stud_t *ptr);
void print_t(const stud_t *ptr);

int main()
{
	stud_t ptr;
	scan_t(&ptr);
	print_t(&ptr);

	return 0;
}

void scan_t( stud_t *ptr)
{
	printf("enter the student information :(std,roll no,name,marks,address)\n");
	scanf("%d%d%s%f%s",&ptr->std,&ptr->roll,&ptr->name,&ptr->marks,&ptr->addr);


}
void print_t(const stud_t *ptr)
{
	printf("student informatioin :\nstandard is %d\nroll no. is %d\nname is %c\nmarks is %f\naddress is %s\n",ptr->std,ptr->roll,ptr->name,ptr->marks,ptr->addr);

}
