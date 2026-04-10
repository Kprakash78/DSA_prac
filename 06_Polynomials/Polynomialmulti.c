#include <stdio.h>

int main()
{
       int n;
       scanf("%d", &n);

       int arr1[n];
       int arr2[n];
       int arr3[2 * n - 1];

       for (int i = 0; i < 2 * n - 1; i++)
              arr3[i] = 0;

       for (int i = n - 1; i >= 0; i--)
       {
              scanf("%d", &arr1[i]);
       }

       for (int i = n - 1; i >= 0; i--)
       {
              scanf("%d", &arr2[i]);
       }

       printf("Multiplication of two Polynomials\n\n");

       for (int i = 0; i < n; i++)
       {
              for (int j = 0; j < n; j++)
              {
                     arr3[i + j] += arr1[i] * arr2[j];
              }
       }

       for (int i = 2 * n - 2; i >= 0; i--)
       {
              printf("%d", arr3[i]);

              if (i != 0)
                     printf("x^%d + ", i);
              else
                     break;
       }

       return 0;
}