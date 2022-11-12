#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, tmp;
    int count = 5;
    int a[5] = { 26,5,81,7,63 };
    for (i = 0; i < count - 1; i++) 
    {
        for (j = i; j < 4; j++) 
        {
            if (a[j] > a[j + 1]) {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
        printf("Loop %d : ", i+1);
        for (j = i; j < count; j++)
            printf("%4d", a[j]);
        printf("\n");
    }
    printf("final array is :\n");
    for (j = 0; j < count; j++)
        printf("%4d", a[j]);
    printf("\n");
    system("pause");
    return 0;
}