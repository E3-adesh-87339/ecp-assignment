/*Write a function to accept array elements from the user. Write another function to print array
elements. Re-use these functions in rest of the assignments wherever required.*/


#include<stdio.h>

float acpt_marks(float *a, int len);
float print_marks(float *a,int len);

int main()
{

float marks[5];
acpt_marks(marks,5);
print_marks(marks,5);


return 0;
}

float acpt_marks(float *a,int len)
{
int i;
printf("enter the marks of 5 sub :\n");
for (i=0;i<len;i++)

 scanf("%f",&a[i]);


}

float print_marks(float *a,int len)

{
 printf("marks :\n");
for(int i=1;i<=len;i++)
printf("subject %d = %.2f\n",i,a[i]);
printf("\n");
}











