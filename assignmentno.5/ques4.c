/*Write a function to calculate maximum of the array elements. Write another function to
calculate maximum of the array elements.
*/

#include <stdio.h>

int max(int *arr,int n);
void min (int *arr, int n);
int main() {
  int n;
  int arr[n];
  printf("Enter the number of elements :\n ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
  //  printf("Enter number %d: ", i + 1);
    scanf("%d", &arr[i]);

  }
	max(arr , n);
	min(arr,n);
return 0;
}

 int max(int *arr ,int n)
 {
 // storing the largest number to arr[0]
 
 for (int i = 1; i < n; ++i) 
  {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }


  printf("Largest element = %d\n", arr[0]);

 
}
void min(int *arr,int n)
{
 for (int i = 1; i < n; ++i) 
  {
    if (arr[0] > arr[i]) {
      arr[0] = arr[i];
    }
  }


  printf("smallest element = %d\n", arr[0]);

 
}
