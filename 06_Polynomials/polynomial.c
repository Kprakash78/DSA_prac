#include <stdio.h>

int main()
{
       int n;
       scanf("%d", &n);

       int arr1[n];
       int arr2[n];

       for (int i = n - 1; i >= 0; i--)
       {
              scanf("%d", &arr1[i]);
       }

       for (int i = n - 1; i >= 0; i--)
       {
              scanf("%d", &arr2[i]);
       }

       printf("Addition of two Polynomials\n");

       for (int i = n - 1; i >= 0; i--)
       {
              printf("(%d)", arr1[i] + arr2[i]);

              if (i != 0)
                     printf("x^%d + ", i);
              else
                     break;
       }

       printf("\n\nSubtraction of two Polynomials\n");

       for (int i = n - 1; i >= 0; i--)
       {
              printf("(%d)", arr1[i] - arr2[i]);

              if (i != 0)
                     printf("x^%d + ", i);
              else
                     break;
       }

       return 0;
}