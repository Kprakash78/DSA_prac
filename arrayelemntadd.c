#include <stdio.h>

int main()
{
       int arr[10];
       int num;

       printf("Enter the number of elements to enter:");
       scanf("%d", &num);

       printf("Enter the elements of the array:");
       for (int i = 0; i < num; i++)
       {
              printf("element %d: ", i);
              scanf("%d", &arr[i]);
       }

       printf("Enter the element to add in the array:");
       int element;
       scanf("%d", &element);

       printf("Enter the position to add the element:");
       int position;
       scanf("%d", &position);

       for (int i = num - 1; i >= position; i--)
       {
              arr[i + 1] = arr[i];
       }

       arr[position] = element;

       printf("The updated array is: ");
       for (int i = 0; i <= num; i++)
       {
              printf("%d ", arr[i]);
       }

       return 0;
}