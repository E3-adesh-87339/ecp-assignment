#include <stdio.h>

int max(int *arr,int size);

int main ()
{
	
	int size;
	int arr[size]; 
	printf("enter length of array\n");
	scanf("%d",&size);
	printf("enter array elements\n");
	for (int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	return 0;
	}

	max(arr,size);
return 0;
}

int max(int *arr,int size)
{

int m = 0;
int min = arr[size];
for(int i=1; i<size; i++)
    {
     //   If current element is greater than max */
        if(arr[i] > m)
        {
            m = arr[i];
        }

       //  If current element is smaller than min */
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

     Print maximum and minimum element 
    printf("Maximum element = %d\n", m);
    printf("Minimum element = %d", min);

 
}

