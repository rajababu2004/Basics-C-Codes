#include <stdio.h>
int main() 
{
    int a[2][3], sum = 0;
    for (int r = 0; r < 2; r++) 
    {
        for (int c = 0; c < 3; c++) 
        {

            printf("Enter a number: ");
            scanf("%d", &a[r][c]);    
            sum += a[r][c];
        }
    }
    puts("The entered 2D array is:");
    for (int r = 0; r < 2; r++) 
    {
        for (int c = 0; c < 3; c++) 
        {
            printf("%d ", a[r][c]);
        }
        printf("\n");
    }
    printf ("The sum is: %d", sum);
    return 0;
}
