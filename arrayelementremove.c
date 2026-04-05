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
       printf("Enter the position to remove the element %d: ", num);
       int pos;
       scanf("%d", &pos);
       int position = pos - 1;

       for (int i = position; i < num - 1; i++)
       {
              arr[i] = arr[i + 1];
       }
       num--;

       printf("The updated array after removal is: ");
       for (int i = 0; i < num; i++)
       {
              printf("%d ", arr[i]);
       }
       printf("\n");

       return 0;
}
