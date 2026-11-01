#include <stdio.h>

int main()
{

     int n;
     scanf("%d", &n);
     int array[n];

     for (int i = 0; i < n; i++)
     {
          scanf("%d", &array[i]);
          //   printf("%d\n",array[i]);
     }

     int x;
     scanf("%d", &x);

     for (int i = 0; i < n - 1; i++)
     {

          for (int j = i + 1; j < n; j++)
          {
               if (array[i] + array[j] == x)
               {
                    printf("%d %d", array[i], array[j]);
               }
               //  printf("%d %d", array[i], array[j]);
               //  printf("\n");
          }
          
     }
     return 0;
}