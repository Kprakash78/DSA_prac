#include <stdio.h>

int main()
{
       int m, n;
       scanf("%d %d", &m, &n);

       int mat[m][n];
       int count = 0;

       for (int i = 0; i < m; i++)
       {
              for (int j = 0; j < n; j++)
              {
                     scanf("%d", &mat[i][j]);
              }
       }

       for (int i = 0; i < m; i++)
       {
              for (int j = 0; j < n; j++)
              {
                     if (mat[i][j] == 0)
                     {
                            count++;
                     }
              }
       }

       if (count > (m * n) / 2)
       {
              printf("Sparse\n");
       }
       else
       {
              printf("Not Sparse\n");
       }

       return 0;
}