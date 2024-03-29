#include <stdio.h>

int main()
{
    int mat1[6][6], mat2[6][6], mat3[6][6], i, j;

    printf("Enter elements of first (6 * 6) matrix\n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of second (6 * 6) matrix\n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("\nMatrix 1\n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2\n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("\nMatrix 3 = Matrix 1 + Matrix 2\n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%d\t", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
