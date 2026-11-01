#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;
    for (int i = 0; i < n; i++) // printing line
    {
        for (int k = 0; k < space; k++) //printing space
        {
            printf(" ");
        }
        for (int j = 0; j < star; j++) // printing star
        {
            printf("*");
        }
        printf("\n");
        star = star + 2;
        space--;
    }
    return 0;
}