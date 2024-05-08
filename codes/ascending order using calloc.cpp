#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, temp;
    int *a;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    a = (int*) calloc(n, sizeof(int));
    if (a == NULL)
    {
        printf("Memory allocation failed.");
        return 1;
    }

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n-1; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("The sorted array in ascending order: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    free(a);
    return 0;
}
