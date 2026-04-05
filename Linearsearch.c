#include <stdio.h>

int main()
{
       int n;
       scanf("%d", &n);

       int arr[n];

       for (int i = 0; i < n; i++)
       {
              scanf("%d", &arr[i]);
       }

       int key;
       scanf("%d", &key);

       int flag = -1;

       for (int i = 0; i < n; i++)
       {
              if (arr[i] == key)
              {
                     flag = i;
                     break;
              }
       }

       if (flag == -1)
       {
              printf("Element is not present\n");
       }
       else
       {
              printf("Element is present at %d index\n", flag);
       }

       return 0;
}