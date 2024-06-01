#include <stdio.h>

void main()
{
    int a[10], i;
    printf("Enter ten numbers:\n");

    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    printf("The entered numbers are:\n");
    for (i = 0; i < 10; i++)
        printf("\na[%d]=%d", i, a[i]);
}