#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int start = 2*n-1;
    int space = 0;
    for (int i = 0; i < n; i++) //print line
    {
        for(int k=0;k < space ;k++ ){
           printf(" ");
        }
        for (int j = 0; j < start; j++)// print star
        {
            printf("*");
        }
        printf("\n");
        start=start-2;
        space++;
    }

    return 0;
}