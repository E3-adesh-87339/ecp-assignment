//Write a function to reverse the array elements.


#include<stdio.h>
#include<string.h>

}

int main()
{

char arr[12]={1,2,3,4,5,6,7,8,9};
printf("array is :\n");
for (int i=0;i<10;i++)
{
printf("%d\t",arr[i]);
}
int len,i,j,rev,a;
len = strlen(arr);
printf("length og string is %d",len);

for (i=0;i<len;i++)
{
  
	for(j=len;j>i;j++)
		{
			a = arr[i];
			&arr[i]=arr[j];
			&arr[j]=a;
	rev=arr[i];
	}
}
printf("%d\t",rev);
return 0;
}
