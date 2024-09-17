	                               //Write a function to reverse the array elements.                 

#include <stdio.h>


// Function to reverse the array
void reverse(int *arr, int n){

    int rarr[n];
    // Reversing the array using an auxiliary array
    for (int i = 0; i < n; i++)
    {
        rarr[i] = arr[n - i - 1];
    }

    // Copying the reversed array to the original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = rarr[i];
    }
printf("Reversed array: ");
      for (int i = 0; i < n; i++)
      {
          printf("%d ", arr[i]);
      }

}

int main()
{
    

	 int n;
     int arr[n];
    // Inputting the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Inputting the array
    printf("Enter an array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Calling the function to reverse the array
    reverse(arr, n);

    return 0;
}
 

